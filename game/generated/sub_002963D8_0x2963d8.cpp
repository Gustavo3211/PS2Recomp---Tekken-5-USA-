#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002963D8
// Address: 0x2963d8 - 0x296538
void sub_002963D8_0x2963d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963D8_0x2963d8");
#endif

    ctx->pc = 0x2963d8u;

    // 0x2963d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2963d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2963dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2963dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2963e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2963e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2963e8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2963e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2963ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2963ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2963f0: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x2963f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2963f4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2963F4u;
    {
        const bool branch_taken_0x2963f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963F4u;
        // 0x2963f8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963f4) {
            ctx->pc = 0x296518u;
            goto label_296518;
        }
    }
    ctx->pc = 0x2963FCu;
    // 0x2963fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x296400: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x296400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x296404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296408: 0x8c63bb60  lw          $v1, -0x44A0($v1)
    ctx->pc = 0x296408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949728)));
    // 0x29640c: 0x600008  jr          $v1
    ctx->pc = 0x29640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296418u: goto label_296418;
            case 0x296450u: goto label_296450;
            case 0x296468u: goto label_296468;
            case 0x2964B0u: goto label_2964b0;
            case 0x2964D0u: goto label_2964d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29640Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296414u;
    // 0x296414: 0x0  nop
    ctx->pc = 0x296414u;
    // NOP
label_296418:
    // 0x296418: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x296418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29641c: 0xc7818ff8  lwc1        $f1, -0x7008($gp)
    ctx->pc = 0x29641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296420: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x296420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x296424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x296424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x296428: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x296428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x29642c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x29642Cu;
    {
        const bool branch_taken_0x29642c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29642Cu;
        // 0x296430: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29642c) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x296434u;
    // 0x296434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x296438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29643c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296440: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x296440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x296444: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x296444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x296448: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x296448u;
    {
        const bool branch_taken_0x296448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296448u;
        // 0x29644c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296448) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x296450u;
label_296450:
    // 0x296450: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x296454: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x296454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x296458: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x296458u;
    {
        const bool branch_taken_0x296458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296458u;
        // 0x29645c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296458) {
            ctx->pc = 0x29652Cu;
            goto label_29652c;
        }
    }
    ctx->pc = 0x296460u;
    // 0x296460: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x296460u;
    {
        const bool branch_taken_0x296460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296460u;
        // 0x296464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296460) {
            ctx->pc = 0x2964C4u;
            goto label_2964c4;
        }
    }
    ctx->pc = 0x296468u;
label_296468:
    // 0x296468: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x296468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29646c: 0xc7828ffc  lwc1        $f2, -0x7004($gp)
    ctx->pc = 0x29646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296470: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x296470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296474: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x296474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x296478: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29647c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29647cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x296480: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x296480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x296484: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x296484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x296488: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x296488u;
    {
        const bool branch_taken_0x296488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296488u;
        // 0x29648c: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296488) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x296490u;
    // 0x296490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x296494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296498: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x296498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29649c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x29649cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2964a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2964a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2964a4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2964a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2964a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2964A8u;
    {
        const bool branch_taken_0x2964a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964A8u;
        // 0x2964ac: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964a8) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x2964B0u;
label_2964b0:
    // 0x2964b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2964b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2964b4: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2964b8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2964B8u;
    {
        const bool branch_taken_0x2964b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964B8u;
        // 0x2964bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964b8) {
            ctx->pc = 0x29652Cu;
            goto label_29652c;
        }
    }
    ctx->pc = 0x2964C0u;
    // 0x2964c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2964c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2964c4:
    // 0x2964c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2964c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2964c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2964C8u;
    {
        const bool branch_taken_0x2964c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964C8u;
        // 0x2964cc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964c8) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x2964D0u;
label_2964d0:
    // 0x2964d0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2964d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2964d4: 0xc7829000  lwc1        $f2, -0x7000($gp)
    ctx->pc = 0x2964d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2964d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2964d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2964dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2964dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2964e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2964e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2964e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2964e8: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x2964e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2964ec: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x2964ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2964f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2964F0u;
    {
        const bool branch_taken_0x2964f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2964F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964F0u;
        // 0x2964f4: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f0) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x2964F8u;
    // 0x2964f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2964fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2964fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296504: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x296504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x296508: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x296508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x29650c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x29650cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x296510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296510u;
    {
        const bool branch_taken_0x296510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296510u;
        // 0x296514: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296510) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x296518u;
label_296518:
    // 0x296518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29651c: 0x80a58f0  j           func_2963C0
    ctx->pc = 0x29651Cu;
    ctx->pc = 0x296520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29651Cu;
    // 0x296520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963C0u, 0x29651Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x296524u;
    // 0x296524: 0x0  nop
    ctx->pc = 0x296524u;
    // NOP
label_296528:
    // 0x296528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29652c:
    // 0x29652c: 0x3e00008  jr          $ra
    ctx->pc = 0x29652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29652Cu;
        // 0x296530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29652Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296534u;
    // 0x296534: 0x0  nop
    ctx->pc = 0x296534u;
    // NOP
    ctx->pc = 0x296538u;
}
