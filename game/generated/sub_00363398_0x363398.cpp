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

// Function: sub_00363398
// Address: 0x363398 - 0x3634f0
void sub_00363398_0x363398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363398_0x363398");
#endif

    switch (ctx->pc) {
        case 0x36341cu: goto label_36341c;
        case 0x36343cu: goto label_36343c;
        case 0x363450u: goto label_363450;
        case 0x3634bcu: goto label_3634bc;
        default: break;
    }

    ctx->pc = 0x363398u;

    // 0x363398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36339c: 0x8f83c810  lw          $v1, -0x37F0($gp)
    ctx->pc = 0x36339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952976)));
    // 0x3633a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3633a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3633a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3633a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3633a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3633a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3633ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3633acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3633b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3633b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3633b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3633b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3633bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3633bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633c0: 0x10710021  beq         $v1, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3633C0u;
    {
        const bool branch_taken_0x3633c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633C0u;
        // 0x3633c4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633c0) {
            ctx->pc = 0x363448u;
            goto label_363448;
        }
    }
    ctx->pc = 0x3633C8u;
    // 0x3633c8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3633c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3633cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3633CCu;
    {
        const bool branch_taken_0x3633cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3633D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633CCu;
        // 0x3633d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633cc) {
            ctx->pc = 0x3633E8u;
            goto label_3633e8;
        }
    }
    ctx->pc = 0x3633D4u;
    // 0x3633d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3633D4u;
    {
        const bool branch_taken_0x3633d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3633D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633D4u;
        // 0x3633d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633d4) {
            ctx->pc = 0x3633F8u;
            goto label_3633f8;
        }
    }
    ctx->pc = 0x3633DCu;
    // 0x3633dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3633DCu;
    {
        const bool branch_taken_0x3633dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3633E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633DCu;
        // 0x3633e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633dc) {
            ctx->pc = 0x3634D8u;
            goto label_3634d8;
        }
    }
    ctx->pc = 0x3633E4u;
    // 0x3633e4: 0x0  nop
    ctx->pc = 0x3633e4u;
    // NOP
label_3633e8:
    // 0x3633e8: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3633E8u;
    {
        const bool branch_taken_0x3633e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3633ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633E8u;
        // 0x3633ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633e8) {
            ctx->pc = 0x3634C8u;
            goto label_3634c8;
        }
    }
    ctx->pc = 0x3633F0u;
    // 0x3633f0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3633F0u;
    {
        const bool branch_taken_0x3633f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3633F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633F0u;
        // 0x3633f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633f0) {
            ctx->pc = 0x3634D8u;
            goto label_3634d8;
        }
    }
    ctx->pc = 0x3633F8u;
label_3633f8:
    // 0x3633f8: 0x8f82c800  lw          $v0, -0x3800($gp)
    ctx->pc = 0x3633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x3633fc: 0xaf86cc40  sw          $a2, -0x33C0($gp)
    ctx->pc = 0x3633fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954048), GPR_U32(ctx, 6));
    // 0x363400: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x363400u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363404: 0xaf87cc3c  sw          $a3, -0x33C4($gp)
    ctx->pc = 0x363404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954044), GPR_U32(ctx, 7));
    // 0x363408: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x363408u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x36340c: 0xaf80cc30  sw          $zero, -0x33D0($gp)
    ctx->pc = 0x36340cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954032), GPR_U32(ctx, 0));
    // 0x363410: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x363410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363414: 0xc0d8c16  jal         func_363058
    ctx->pc = 0x363414u;
    SET_GPR_U32(ctx, 31, 0x36341Cu);
    ctx->pc = 0x363418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363414u;
    // 0x363418: 0xaf82cc34  sw          $v0, -0x33CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363058u, 0x363414u, 0x36341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36341Cu;
label_36341c:
    // 0x36341c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36341Cu;
    {
        const bool branch_taken_0x36341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36341Cu;
        // 0x363420: 0xaf82cc38  sw          $v0, -0x33C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36341c) {
            ctx->pc = 0x363430u;
            goto label_363430;
        }
    }
    ctx->pc = 0x363424u;
    // 0x363424: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x363424u;
    {
        const bool branch_taken_0x363424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363424u;
        // 0x363428: 0xaf91c810  sw          $s1, -0x37F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952976), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363424) {
            ctx->pc = 0x3634D0u;
            goto label_3634d0;
        }
    }
    ctx->pc = 0x36342Cu;
    // 0x36342c: 0x0  nop
    ctx->pc = 0x36342cu;
    // NOP
label_363430:
    // 0x363430: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363434: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363434u;
    SET_GPR_U32(ctx, 31, 0x36343Cu);
    ctx->pc = 0x363438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363434u;
    // 0x363438: 0x24847798  addiu       $a0, $a0, 0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363434u, 0x36343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36343Cu;
label_36343c:
    // 0x36343c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x36343Cu;
    {
        const bool branch_taken_0x36343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36343Cu;
        // 0x363440: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36343c) {
            ctx->pc = 0x3634D4u;
            goto label_3634d4;
        }
    }
    ctx->pc = 0x363444u;
    // 0x363444: 0x0  nop
    ctx->pc = 0x363444u;
    // NOP
label_363448:
    // 0x363448: 0xc0d8c1c  jal         func_363070
    ctx->pc = 0x363448u;
    SET_GPR_U32(ctx, 31, 0x363450u);
    ctx->pc = 0x36344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363448u;
    // 0x36344c: 0x8f84cc38  lw          $a0, -0x33C8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363070u, 0x363448u, 0x363450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363450u;
label_363450:
    // 0x363450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363454: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x363454u;
    {
        const bool branch_taken_0x363454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x363458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363454u;
        // 0x363458: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363454) {
            ctx->pc = 0x3634D4u;
            goto label_3634d4;
        }
    }
    ctx->pc = 0x36345Cu;
    // 0x36345c: 0x8f82cc30  lw          $v0, -0x33D0($gp)
    ctx->pc = 0x36345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954032)));
    // 0x363460: 0x8f85cc34  lw          $a1, -0x33CC($gp)
    ctx->pc = 0x363460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954036)));
    // 0x363464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x363464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x363468: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x363468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x36346c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36346Cu;
    {
        const bool branch_taken_0x36346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36346Cu;
        // 0x363470: 0xaf82cc30  sw          $v0, -0x33D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36346c) {
            ctx->pc = 0x363480u;
            goto label_363480;
        }
    }
    ctx->pc = 0x363474u;
    // 0x363474: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x363474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363478: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x363478u;
    {
        const bool branch_taken_0x363478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363478u;
        // 0x36347c: 0xaf82c810  sw          $v0, -0x37F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363478) {
            ctx->pc = 0x3634D0u;
            goto label_3634d0;
        }
    }
    ctx->pc = 0x363480u;
label_363480:
    // 0x363480: 0x8f88c800  lw          $t0, -0x3800($gp)
    ctx->pc = 0x363480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x363484: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x363484u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x363488: 0x8f83cc40  lw          $v1, -0x33C0($gp)
    ctx->pc = 0x363488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954048)));
    // 0x36348c: 0x8f87cc3c  lw          $a3, -0x33C4($gp)
    ctx->pc = 0x36348cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954044)));
    // 0x363490: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x363490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x363494: 0x82400b  movn        $t0, $a0, $v0
    ctx->pc = 0x363494u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x363498: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x363498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36349c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x36349cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3634a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3634a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3634a4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3634a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3634a8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3634a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3634ac: 0xaf83cc40  sw          $v1, -0x33C0($gp)
    ctx->pc = 0x3634acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954048), GPR_U32(ctx, 3));
    // 0x3634b0: 0xaf87cc3c  sw          $a3, -0x33C4($gp)
    ctx->pc = 0x3634b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954044), GPR_U32(ctx, 7));
    // 0x3634b4: 0xc0d8c16  jal         func_363058
    ctx->pc = 0x3634B4u;
    SET_GPR_U32(ctx, 31, 0x3634BCu);
    ctx->pc = 0x3634B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3634B4u;
    // 0x3634b8: 0xaf88cc34  sw          $t0, -0x33CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954036), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363058u, 0x3634B4u, 0x3634BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3634BCu;
label_3634bc:
    // 0x3634bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3634BCu;
    {
        const bool branch_taken_0x3634bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3634C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634BCu;
        // 0x3634c0: 0xaf82cc38  sw          $v0, -0x33C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3634bc) {
            ctx->pc = 0x3634D0u;
            goto label_3634d0;
        }
    }
    ctx->pc = 0x3634C4u;
    // 0x3634c4: 0x0  nop
    ctx->pc = 0x3634c4u;
    // NOP
label_3634c8:
    // 0x3634c8: 0xaf80c810  sw          $zero, -0x37F0($gp)
    ctx->pc = 0x3634c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952976), GPR_U32(ctx, 0));
    // 0x3634cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3634ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3634d0:
    // 0x3634d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3634d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3634d4:
    // 0x3634d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3634d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3634d8:
    // 0x3634d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3634d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3634dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3634dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3634e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3634e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3634e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3634E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3634E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634E4u;
        // 0x3634e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3634ECu;
    // 0x3634ec: 0x0  nop
    ctx->pc = 0x3634ecu;
    // NOP
    ctx->pc = 0x3634f0u;
}
