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

// Function: sub_002F8428
// Address: 0x2f8428 - 0x2f8c58
void sub_002F8428_0x2f8428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8428_0x2f8428");
#endif

    switch (ctx->pc) {
        case 0x2f84e8u: goto label_2f84e8;
        case 0x2f8568u: goto label_2f8568;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8960u: goto label_2f8960;
        case 0x2f8980u: goto label_2f8980;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89d4u: goto label_2f89d4;
        case 0x2f89e8u: goto label_2f89e8;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8aa8u: goto label_2f8aa8;
        default: break;
    }

    ctx->pc = 0x2f8428u;

    // 0x2f8428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f842c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f8430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f8438: 0x26320140  addiu       $s2, $s1, 0x140
    ctx->pc = 0x2f8438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2f843c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f8440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f8444: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f8448: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f844c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8450: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2f8450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f8454: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f8454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8458u;
    {
        const bool branch_taken_0x2f8458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8458u;
        // 0x2f845c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8458) {
            ctx->pc = 0x2F8470u;
            goto label_2f8470;
        }
    }
    ctx->pc = 0x2F8460u;
    // 0x2f8460: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8464: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8468: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8468u;
    {
        const bool branch_taken_0x2f8468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8468) {
            ctx->pc = 0x2F846Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8468u;
            // 0x2f846c: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8480u;
            goto label_2f8480;
        }
    }
    ctx->pc = 0x2F8470u;
label_2f8470:
    // 0x2f8470: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f8474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8478: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f847c: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f847cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8480:
    // 0x2f8480: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f8480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8484: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8484u;
    {
        const bool branch_taken_0x2f8484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8484u;
        // 0x2f8488: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8484) {
            ctx->pc = 0x2F849Cu;
            goto label_2f849c;
        }
    }
    ctx->pc = 0x2F848Cu;
    // 0x2f848c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8490: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8494: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8494u;
    {
        const bool branch_taken_0x2f8494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8494) {
            ctx->pc = 0x2F8498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8494u;
            // 0x2f8498: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F84ACu;
            goto label_2f84ac;
        }
    }
    ctx->pc = 0x2F849Cu;
label_2f849c:
    // 0x2f849c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f849cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f84a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84a4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f84a8: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f84ac:
    // 0x2f84ac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F84ACu;
    {
        const bool branch_taken_0x2f84ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f84ac) {
            ctx->pc = 0x2F84B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F84ACu;
            // 0x2f84b0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F84F0u;
            goto label_2f84f0;
        }
    }
    ctx->pc = 0x2F84B4u;
    // 0x2f84b4: 0x26250148  addiu       $a1, $s1, 0x148
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x2f84b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f84bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F84BCu;
    {
        const bool branch_taken_0x2f84bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84bc) {
            ctx->pc = 0x2F84C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F84BCu;
            // 0x2f84c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F84D8u;
            goto label_2f84d8;
        }
    }
    ctx->pc = 0x2F84C4u;
    // 0x2f84c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f84c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f84cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F84CCu;
    {
        const bool branch_taken_0x2f84cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f84cc) {
            ctx->pc = 0x2F84E0u;
            goto label_2f84e0;
        }
    }
    ctx->pc = 0x2F84D4u;
    // 0x2f84d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f84d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f84d8:
    // 0x2f84d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f84d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f84e0:
    // 0x2f84e0: 0xc0bde92  jal         func_2F7A48
    ctx->pc = 0x2F84E0u;
    SET_GPR_U32(ctx, 31, 0x2F84E8u);
    ctx->pc = 0x2F84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84E0u;
    // 0x2f84e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7A48u, 0x2F84E0u, 0x2F84E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84E8u;
label_2f84e8:
    // 0x2f84e8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F84E8u;
    {
        const bool branch_taken_0x2f84e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84E8u;
        // 0x2f84ec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84e8) {
            ctx->pc = 0x2F8554u;
            goto label_2f8554;
        }
    }
    ctx->pc = 0x2F84F0u;
label_2f84f0:
    // 0x2f84f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F84F0u;
    {
        const bool branch_taken_0x2f84f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84F0u;
        // 0x2f84f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84f0) {
            ctx->pc = 0x2F8508u;
            goto label_2f8508;
        }
    }
    ctx->pc = 0x2F84F8u;
    // 0x2f84f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f84fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8500: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8500u;
    {
        const bool branch_taken_0x2f8500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8500) {
            ctx->pc = 0x2F8504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8500u;
            // 0x2f8504: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8518u;
            goto label_2f8518;
        }
    }
    ctx->pc = 0x2F8508u;
label_2f8508:
    // 0x2f8508: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f850c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8510: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8514: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8518:
    // 0x2f8518: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2f8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2f851c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F851Cu;
    {
        const bool branch_taken_0x2f851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F851Cu;
        // 0x2f8520: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f851c) {
            ctx->pc = 0x2F854Cu;
            goto label_2f854c;
        }
    }
    ctx->pc = 0x2F8524u;
    // 0x2f8524: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f8524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8528: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8528u;
    {
        const bool branch_taken_0x2f8528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8528) {
            ctx->pc = 0x2F852Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8528u;
            // 0x2f852c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8544u;
            goto label_2f8544;
        }
    }
    ctx->pc = 0x2F8530u;
    // 0x2f8530: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8534: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8538: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8538u;
    {
        const bool branch_taken_0x2f8538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8538u;
        // 0x2f853c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8538) {
            ctx->pc = 0x2F854Cu;
            goto label_2f854c;
        }
    }
    ctx->pc = 0x2F8540u;
    // 0x2f8540: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f8544:
    // 0x2f8544: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8548: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2f8548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f854c:
    // 0x2f854c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f8550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8554:
    // 0x2f8554: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2f8554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f8558: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F8558u;
    {
        const bool branch_taken_0x2f8558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8558u;
        // 0x2f855c: 0x2671821  addu        $v1, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8558) {
            ctx->pc = 0x2F85B8u;
            goto label_2f85b8;
        }
    }
    ctx->pc = 0x2F8560u;
    // 0x2f8560: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f8560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8564: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2f8564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2f8568:
    // 0x2f8568: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f856c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F856Cu;
    {
        const bool branch_taken_0x2f856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F856Cu;
        // 0x2f8570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f856c) {
            ctx->pc = 0x2F8584u;
            goto label_2f8584;
        }
    }
    ctx->pc = 0x2F8574u;
    // 0x2f8574: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8578: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f857c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F857Cu;
    {
        const bool branch_taken_0x2f857c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F857Cu;
        // 0x2f8580: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f857c) {
            ctx->pc = 0x2F8594u;
            goto label_2f8594;
        }
    }
    ctx->pc = 0x2F8584u;
label_2f8584:
    // 0x2f8584: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f8588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f858c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f858cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8590: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2f8590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f8594:
    // 0x2f8594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f8594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f859c: 0x213282a  slt         $a1, $s0, $s3
    ctx->pc = 0x2f859cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f85a0: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2f85a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f85a8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2f85a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2f85ac: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F85ACu;
    {
        const bool branch_taken_0x2f85ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85ACu;
        // 0x2f85b0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85ac) {
            ctx->pc = 0x2F8568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8568;
        }
    }
    ctx->pc = 0x2F85B4u;
    // 0x2f85b4: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x2f85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_2f85b8:
    // 0x2f85b8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2f85b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f85bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F85BCu;
    {
        const bool branch_taken_0x2f85bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85BCu;
        // 0x2f85c0: 0x2a02000e  slti        $v0, $s0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85bc) {
            ctx->pc = 0x2F8620u;
            goto label_2f8620;
        }
    }
    ctx->pc = 0x2F85C4u;
    // 0x2f85c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f85c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f85c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85cc: 0x0  nop
    ctx->pc = 0x2f85ccu;
    // NOP
label_2f85d0:
    // 0x2f85d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f85d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F85D4u;
    {
        const bool branch_taken_0x2f85d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85D4u;
        // 0x2f85d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85d4) {
            ctx->pc = 0x2F85ECu;
            goto label_2f85ec;
        }
    }
    ctx->pc = 0x2F85DCu;
    // 0x2f85dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f85e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f85e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F85E4u;
    {
        const bool branch_taken_0x2f85e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85E4u;
        // 0x2f85e8: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85e4) {
            ctx->pc = 0x2F85FCu;
            goto label_2f85fc;
        }
    }
    ctx->pc = 0x2F85ECu;
label_2f85ec:
    // 0x2f85ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f85f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f85f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f85f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2f85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f85fc:
    // 0x2f85fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f85fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f8604: 0x207282a  slt         $a1, $s0, $a3
    ctx->pc = 0x2f8604u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f8608: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2f8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2f860c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8610: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f8610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f8614: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F8614u;
    {
        const bool branch_taken_0x2f8614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8614u;
        // 0x2f8618: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8614) {
            ctx->pc = 0x2F85D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f85d0;
        }
    }
    ctx->pc = 0x2F861Cu;
    // 0x2f861c: 0x2a02000e  slti        $v0, $s0, 0xE
    ctx->pc = 0x2f861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
label_2f8620:
    // 0x2f8620: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F8620u;
    {
        const bool branch_taken_0x2f8620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8620) {
            ctx->pc = 0x2F8624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8620u;
            // 0x2f8624: 0x8e220118  lw          $v0, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8680u;
            goto label_2f8680;
        }
    }
    ctx->pc = 0x2F8628u;
    // 0x2f8628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f8628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f862c: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x2f862cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2f8630:
    // 0x2f8630: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f8634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8634u;
    {
        const bool branch_taken_0x2f8634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8634u;
        // 0x2f8638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8634) {
            ctx->pc = 0x2F864Cu;
            goto label_2f864c;
        }
    }
    ctx->pc = 0x2F863Cu;
    // 0x2f863c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8640: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8644: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8644u;
    {
        const bool branch_taken_0x2f8644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8644u;
        // 0x2f8648: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8644) {
            ctx->pc = 0x2F865Cu;
            goto label_2f865c;
        }
    }
    ctx->pc = 0x2F864Cu;
label_2f864c:
    // 0x2f864c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f864cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f8650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8654: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8658: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2f8658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f865c:
    // 0x2f865c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f865cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f8660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f8664: 0x2a05000e  slti        $a1, $s0, 0xE
    ctx->pc = 0x2f8664u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f8668: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2f8668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2f866c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8670: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2f8670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2f8674: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F8674u;
    {
        const bool branch_taken_0x2f8674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8674u;
        // 0x2f8678: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8674) {
            ctx->pc = 0x2F8630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8630;
        }
    }
    ctx->pc = 0x2F867Cu;
    // 0x2f867c: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x2f867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_2f8680:
    // 0x2f8680: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f8680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8684: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8684u;
    {
        const bool branch_taken_0x2f8684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8684u;
        // 0x2f8688: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8684) {
            ctx->pc = 0x2F869Cu;
            goto label_2f869c;
        }
    }
    ctx->pc = 0x2F868Cu;
    // 0x2f868c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8690: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8694: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8694u;
    {
        const bool branch_taken_0x2f8694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8694u;
        // 0x2f8698: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8694) {
            ctx->pc = 0x2F86ACu;
            goto label_2f86ac;
        }
    }
    ctx->pc = 0x2F869Cu;
label_2f869c:
    // 0x2f869c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f869cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f86a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f86a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86a4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f86a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f86ac:
    // 0x2f86ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f86acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f86b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f86b4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2F86B4u;
    SET_GPR_U32(ctx, 31, 0x2F86BCu);
    ctx->pc = 0x2F86B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86B4u;
    // 0x2f86b8: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2F86B4u, 0x2F86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86BCu;
label_2f86bc:
    // 0x2f86bc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2f86c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f86c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f86c4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F86C4u;
    SET_GPR_U32(ctx, 31, 0x2F86CCu);
    ctx->pc = 0x2F86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86C4u;
    // 0x2f86c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F86C4u, 0x2F86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86CCu;
label_2f86cc:
    // 0x2f86cc: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f86d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F86D0u;
    {
        const bool branch_taken_0x2f86d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86D0u;
        // 0x2f86d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86d0) {
            ctx->pc = 0x2F86E8u;
            goto label_2f86e8;
        }
    }
    ctx->pc = 0x2F86D8u;
    // 0x2f86d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f86dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F86DCu;
    {
        const bool branch_taken_0x2f86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86DCu;
        // 0x2f86e0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86dc) {
            ctx->pc = 0x2F86F4u;
            goto label_2f86f4;
        }
    }
    ctx->pc = 0x2F86E4u;
    // 0x2f86e4: 0x0  nop
    ctx->pc = 0x2f86e4u;
    // NOP
label_2f86e8:
    // 0x2f86e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f86ec: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f86f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f86f4:
    // 0x2f86f4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f86f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f86fc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F86FCu;
    {
        const bool branch_taken_0x2f86fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f86fc) {
            ctx->pc = 0x2F8700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86FCu;
            // 0x2f8700: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F871Cu;
            goto label_2f871c;
        }
    }
    ctx->pc = 0x2F8704u;
    // 0x2f8704: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f870c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8710: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8710u;
    {
        const bool branch_taken_0x2f8710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8710) {
            ctx->pc = 0x2F8714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8710u;
            // 0x2f8714: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8728u;
            goto label_2f8728;
        }
    }
    ctx->pc = 0x2F8718u;
    // 0x2f8718: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f871c:
    // 0x2f871c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8720: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8724: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8728:
    // 0x2f8728: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f8728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f872c: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x2f872cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f8730: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8730u;
    {
        const bool branch_taken_0x2f8730 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8730u;
        // 0x2f8734: 0x8e240064  lw          $a0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8730) {
            ctx->pc = 0x2F8748u;
            goto label_2f8748;
        }
    }
    ctx->pc = 0x2F8738u;
    // 0x2f8738: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f873c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F873Cu;
    {
        const bool branch_taken_0x2f873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F873Cu;
        // 0x2f8740: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f873c) {
            ctx->pc = 0x2F8754u;
            goto label_2f8754;
        }
    }
    ctx->pc = 0x2F8744u;
    // 0x2f8744: 0x0  nop
    ctx->pc = 0x2f8744u;
    // NOP
label_2f8748:
    // 0x2f8748: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f874c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8754:
    // 0x2f8754: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f8758: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2f8758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2f875c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F875Cu;
    {
        const bool branch_taken_0x2f875c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F875Cu;
        // 0x2f8760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f875c) {
            ctx->pc = 0x2F876Cu;
            goto label_2f876c;
        }
    }
    ctx->pc = 0x2F8764u;
    // 0x2f8764: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2f8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2f8768: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f8768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f876c:
    // 0x2f876c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F876Cu;
    {
        const bool branch_taken_0x2f876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F876Cu;
        // 0x2f8770: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f876c) {
            ctx->pc = 0x2F8780u;
            goto label_2f8780;
        }
    }
    ctx->pc = 0x2F8774u;
    // 0x2f8774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8774u;
    {
        const bool branch_taken_0x2f8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8774u;
        // 0x2f8778: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8774) {
            ctx->pc = 0x2F8788u;
            goto label_2f8788;
        }
    }
    ctx->pc = 0x2F877Cu;
    // 0x2f877c: 0x0  nop
    ctx->pc = 0x2f877cu;
    // NOP
label_2f8780:
    // 0x2f8780: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8788:
    // 0x2f8788: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f878c: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2f8790: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8790u;
    {
        const bool branch_taken_0x2f8790 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8790u;
        // 0x2f8794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8790) {
            ctx->pc = 0x2F87A0u;
            goto label_2f87a0;
        }
    }
    ctx->pc = 0x2F8798u;
    // 0x2f8798: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2f8798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2f879c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f879cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f87a0:
    // 0x2f87a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87A0u;
    {
        const bool branch_taken_0x2f87a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87A0u;
        // 0x2f87a4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87a0) {
            ctx->pc = 0x2F87B0u;
            goto label_2f87b0;
        }
    }
    ctx->pc = 0x2F87A8u;
    // 0x2f87a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87A8u;
    {
        const bool branch_taken_0x2f87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87A8u;
        // 0x2f87ac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87a8) {
            ctx->pc = 0x2F87B8u;
            goto label_2f87b8;
        }
    }
    ctx->pc = 0x2F87B0u;
label_2f87b0:
    // 0x2f87b0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f87b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f87b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f87b8:
    // 0x2f87b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f87bc: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2f87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2f87c0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87C0u;
    {
        const bool branch_taken_0x2f87c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C0u;
        // 0x2f87c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87c0) {
            ctx->pc = 0x2F87D0u;
            goto label_2f87d0;
        }
    }
    ctx->pc = 0x2F87C8u;
    // 0x2f87c8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2f87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2f87cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f87ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f87d0:
    // 0x2f87d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87D0u;
    {
        const bool branch_taken_0x2f87d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87D0u;
        // 0x2f87d4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87d0) {
            ctx->pc = 0x2F87E0u;
            goto label_2f87e0;
        }
    }
    ctx->pc = 0x2F87D8u;
    // 0x2f87d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87D8u;
    {
        const bool branch_taken_0x2f87d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87D8u;
        // 0x2f87dc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87d8) {
            ctx->pc = 0x2F87E8u;
            goto label_2f87e8;
        }
    }
    ctx->pc = 0x2F87E0u;
label_2f87e0:
    // 0x2f87e0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f87e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f87e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f87e8:
    // 0x2f87e8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f87ec: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2f87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2f87f0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F87F0u;
    {
        const bool branch_taken_0x2f87f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87F0u;
        // 0x2f87f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87f0) {
            ctx->pc = 0x2F8800u;
            goto label_2f8800;
        }
    }
    ctx->pc = 0x2F87F8u;
    // 0x2f87f8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2f87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2f87fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f87fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8800:
    // 0x2f8800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8800u;
    {
        const bool branch_taken_0x2f8800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8800u;
        // 0x2f8804: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8800) {
            ctx->pc = 0x2F8810u;
            goto label_2f8810;
        }
    }
    ctx->pc = 0x2F8808u;
    // 0x2f8808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8808u;
    {
        const bool branch_taken_0x2f8808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8808u;
        // 0x2f880c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8808) {
            ctx->pc = 0x2F8818u;
            goto label_2f8818;
        }
    }
    ctx->pc = 0x2F8810u;
label_2f8810:
    // 0x2f8810: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8818:
    // 0x2f8818: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f881c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2f881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2f8820: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8820u;
    {
        const bool branch_taken_0x2f8820 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8820u;
        // 0x2f8824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8820) {
            ctx->pc = 0x2F8830u;
            goto label_2f8830;
        }
    }
    ctx->pc = 0x2F8828u;
    // 0x2f8828: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f882c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f882cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8830:
    // 0x2f8830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8830u;
    {
        const bool branch_taken_0x2f8830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8830u;
        // 0x2f8834: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8830) {
            ctx->pc = 0x2F8840u;
            goto label_2f8840;
        }
    }
    ctx->pc = 0x2F8838u;
    // 0x2f8838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8838u;
    {
        const bool branch_taken_0x2f8838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8838u;
        // 0x2f883c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8838) {
            ctx->pc = 0x2F8848u;
            goto label_2f8848;
        }
    }
    ctx->pc = 0x2F8840u;
label_2f8840:
    // 0x2f8840: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8848:
    // 0x2f8848: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f884c: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x2f884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2f8850: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8850u;
    {
        const bool branch_taken_0x2f8850 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8850u;
        // 0x2f8854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8850) {
            ctx->pc = 0x2F8860u;
            goto label_2f8860;
        }
    }
    ctx->pc = 0x2F8858u;
    // 0x2f8858: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f885c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f885cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f8860:
    // 0x2f8860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8860u;
    {
        const bool branch_taken_0x2f8860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8860u;
        // 0x2f8864: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8860) {
            ctx->pc = 0x2F8870u;
            goto label_2f8870;
        }
    }
    ctx->pc = 0x2F8868u;
    // 0x2f8868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8868u;
    {
        const bool branch_taken_0x2f8868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8868u;
        // 0x2f886c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8868) {
            ctx->pc = 0x2F8878u;
            goto label_2f8878;
        }
    }
    ctx->pc = 0x2F8870u;
label_2f8870:
    // 0x2f8870: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8878:
    // 0x2f8878: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f887c: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x2f887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2f8880: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8880u;
    {
        const bool branch_taken_0x2f8880 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8880u;
        // 0x2f8884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8880) {
            ctx->pc = 0x2F8890u;
            goto label_2f8890;
        }
    }
    ctx->pc = 0x2F8888u;
    // 0x2f8888: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f888c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f888cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f8890:
    // 0x2f8890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8890u;
    {
        const bool branch_taken_0x2f8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8890u;
        // 0x2f8894: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8890) {
            ctx->pc = 0x2F88A0u;
            goto label_2f88a0;
        }
    }
    ctx->pc = 0x2F8898u;
    // 0x2f8898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8898u;
    {
        const bool branch_taken_0x2f8898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8898u;
        // 0x2f889c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8898) {
            ctx->pc = 0x2F88A8u;
            goto label_2f88a8;
        }
    }
    ctx->pc = 0x2F88A0u;
label_2f88a0:
    // 0x2f88a0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f88a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f88a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f88a8:
    // 0x2f88a8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f88ac: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2f88b0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88B0u;
    {
        const bool branch_taken_0x2f88b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88B0u;
        // 0x2f88b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88b0) {
            ctx->pc = 0x2F88C0u;
            goto label_2f88c0;
        }
    }
    ctx->pc = 0x2F88B8u;
    // 0x2f88b8: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f88bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f88bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f88c0:
    // 0x2f88c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88C0u;
    {
        const bool branch_taken_0x2f88c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88C0u;
        // 0x2f88c4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88c0) {
            ctx->pc = 0x2F88D0u;
            goto label_2f88d0;
        }
    }
    ctx->pc = 0x2F88C8u;
    // 0x2f88c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88C8u;
    {
        const bool branch_taken_0x2f88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88C8u;
        // 0x2f88cc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88c8) {
            ctx->pc = 0x2F88D8u;
            goto label_2f88d8;
        }
    }
    ctx->pc = 0x2F88D0u;
label_2f88d0:
    // 0x2f88d0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f88d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f88d8:
    // 0x2f88d8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f88dc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2f88e0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88E0u;
    {
        const bool branch_taken_0x2f88e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88E0u;
        // 0x2f88e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88e0) {
            ctx->pc = 0x2F88F0u;
            goto label_2f88f0;
        }
    }
    ctx->pc = 0x2F88E8u;
    // 0x2f88e8: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f88ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f88ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f88f0:
    // 0x2f88f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88F0u;
    {
        const bool branch_taken_0x2f88f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88F0u;
        // 0x2f88f4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88f0) {
            ctx->pc = 0x2F8900u;
            goto label_2f8900;
        }
    }
    ctx->pc = 0x2F88F8u;
    // 0x2f88f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88F8u;
    {
        const bool branch_taken_0x2f88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88F8u;
        // 0x2f88fc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88f8) {
            ctx->pc = 0x2F8908u;
            goto label_2f8908;
        }
    }
    ctx->pc = 0x2F8900u;
label_2f8900:
    // 0x2f8900: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8904: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8908:
    // 0x2f8908: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f890c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f8910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8914: 0x8c43f4dc  lw          $v1, -0xB24($v0)
    ctx->pc = 0x2f8914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4DCu));
    // 0x2f8918: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2f8918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2f891c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8920: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8924: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8924u;
    {
        const bool branch_taken_0x2f8924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8924u;
        // 0x2f8928: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8924) {
            ctx->pc = 0x2F8934u;
            goto label_2f8934;
        }
    }
    ctx->pc = 0x2F892Cu;
    // 0x2f892c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8930: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f8930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f8934:
    // 0x2f8934: 0x26340008  addiu       $s4, $s1, 0x8
    ctx->pc = 0x2f8934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2f8938: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x2f8938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2f893c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f893cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f8940:
    // 0x2f8940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f8940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8944: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2f8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f8948: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2f894c: 0xc46c0080  lwc1        $f12, 0x80($v1)
    ctx->pc = 0x2f894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f8950: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f8950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f8954: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2f8954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2f8958: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F8958u;
    SET_GPR_U32(ctx, 31, 0x2F8960u);
    ctx->pc = 0x2F895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8958u;
    // 0x2f895c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F8958u, 0x2F8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8960u;
label_2f8960:
    // 0x2f8960: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2f8960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f8964: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F8964u;
    {
        const bool branch_taken_0x2f8964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8964) {
            ctx->pc = 0x2F8968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8964u;
            // 0x2f8968: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8940;
        }
    }
    ctx->pc = 0x2F896Cu;
    // 0x2f896c: 0xc62c0098  lwc1        $f12, 0x98($s1)
    ctx->pc = 0x2f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f8970: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f8970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f8974: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f8974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2f8978: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F8978u;
    SET_GPR_U32(ctx, 31, 0x2F8980u);
    ctx->pc = 0x2F897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8978u;
    // 0x2f897c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F8978u, 0x2F8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8980u;
label_2f8980:
    // 0x2f8980: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f8984: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F8984u;
    {
        const bool branch_taken_0x2f8984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8984) {
            ctx->pc = 0x2F8AA8u;
            goto label_2f8aa8;
        }
    }
    ctx->pc = 0x2F898Cu;
    // 0x2f898c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f8990: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f8990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8994: 0xc0be316  jal         func_2F8C58
    ctx->pc = 0x2F8994u;
    SET_GPR_U32(ctx, 31, 0x2F899Cu);
    ctx->pc = 0x2F8998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8994u;
    // 0x2f8998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8C58u, 0x2F8994u, 0x2F899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F899Cu;
label_2f899c:
    // 0x2f899c: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x2f899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f89a0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f89a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f89a4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2F89A4u;
    {
        const bool branch_taken_0x2f89a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f89a4) {
            ctx->pc = 0x2F89A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F89A4u;
            // 0x2f89a8: 0xc6200138  lwc1        $f0, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F89BCu;
            goto label_2f89bc;
        }
    }
    ctx->pc = 0x2F89ACu;
    // 0x2f89ac: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x2f89acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2f89b0: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x2f89b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x2f89b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2f89b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2f89b8: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x2f89b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f89bc:
    // 0x2f89bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f89c0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2f89c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f89c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f89c8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f89c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2f89cc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F89CCu;
    SET_GPR_U32(ctx, 31, 0x2F89D4u);
    ctx->pc = 0x2F89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89CCu;
    // 0x2f89d0: 0xe6200134  swc1        $f0, 0x134($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F89CCu, 0x2F89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89D4u;
label_2f89d4:
    // 0x2f89d4: 0xc62c0134  lwc1        $f12, 0x134($s1)
    ctx->pc = 0x2f89d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f89d8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2f89dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f89e0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F89E0u;
    SET_GPR_U32(ctx, 31, 0x2F89E8u);
    ctx->pc = 0x2F89E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89E0u;
    // 0x2f89e4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F89E0u, 0x2F89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89E8u;
label_2f89e8:
    // 0x2f89e8: 0xc6220134  lwc1        $f2, 0x134($s1)
    ctx->pc = 0x2f89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f89ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f89ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f89f0: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f89f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f89f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f89f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f89f8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2f89f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f89fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f89fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f8a00: 0x0  nop
    ctx->pc = 0x2f8a00u;
    // NOP
    // 0x2f8a04: 0x0  nop
    ctx->pc = 0x2f8a04u;
    // NOP
    // 0x2f8a08: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x2f8a08u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[20];
    // 0x2f8a0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8A0Cu;
    {
        const bool branch_taken_0x2f8a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8a0c) {
            ctx->pc = 0x2F8A28u;
            goto label_2f8a28;
        }
    }
    ctx->pc = 0x2F8A14u;
    // 0x2f8a14: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f8a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f8a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8a1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8A1Cu;
    {
        const bool branch_taken_0x2f8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A1Cu;
        // 0x2f8a20: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a1c) {
            ctx->pc = 0x2F8A34u;
            goto label_2f8a34;
        }
    }
    ctx->pc = 0x2F8A24u;
    // 0x2f8a24: 0x0  nop
    ctx->pc = 0x2f8a24u;
    // NOP
label_2f8a28:
    // 0x2f8a28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f8a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f8a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8a30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f8a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f8a34:
    // 0x2f8a34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f8a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f8a38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f8a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f8a3c: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2f8a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2f8a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8A40u;
    {
        const bool branch_taken_0x2f8a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A40u;
        // 0x2f8a44: 0x30833fff  andi        $v1, $a0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a40) {
            ctx->pc = 0x2F8A50u;
            goto label_2f8a50;
        }
    }
    ctx->pc = 0x2F8A48u;
    // 0x2f8a48: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2f8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2f8a4c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2f8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8a50:
    // 0x2f8a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f8a54: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x2f8a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2f8a58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f8a5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f8a60: 0x8c840340  lw          $a0, 0x340($a0)
    ctx->pc = 0x2f8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x2f8a64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f8a68: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2f8a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8a70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f8a74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2f8a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f8a78: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2f8a78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8a7c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2f8a80: 0x0  nop
    ctx->pc = 0x2f8a80u;
    // NOP
    // 0x2f8a84: 0x0  nop
    ctx->pc = 0x2f8a84u;
    // NOP
    // 0x2f8a88: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2f8a88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2f8a8c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x2f8a8cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x2f8a90: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F8A90u;
    SET_GPR_U32(ctx, 31, 0x2F8A98u);
    ctx->pc = 0x2F8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A90u;
    // 0x2f8a94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F8A90u, 0x2F8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A98u;
label_2f8a98:
    // 0x2f8a98: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2f8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2f8a9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8aa0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F8AA0u;
    SET_GPR_U32(ctx, 31, 0x2F8AA8u);
    ctx->pc = 0x2F8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AA0u;
    // 0x2f8aa4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F8AA0u, 0x2F8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AA8u;
label_2f8aa8:
    // 0x2f8aa8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8AA8u;
    {
        const bool branch_taken_0x2f8aa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AA8u;
        // 0x2f8aac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aa8) {
            ctx->pc = 0x2F8AC8u;
            goto label_2f8ac8;
        }
    }
    ctx->pc = 0x2F8AB0u;
    // 0x2f8ab0: 0x8e260120  lw          $a2, 0x120($s1)
    ctx->pc = 0x2f8ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f8ab4: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x2f8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2f8ab8: 0xc41026  xor         $v0, $a2, $a0
    ctx->pc = 0x2f8ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x2f8abc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8ABCu;
    {
        const bool branch_taken_0x2f8abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ABCu;
        // 0x2f8ac0: 0x2482b  sltu        $t1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8abc) {
            ctx->pc = 0x2F8AD0u;
            goto label_2f8ad0;
        }
    }
    ctx->pc = 0x2F8AC4u;
    // 0x2f8ac4: 0x0  nop
    ctx->pc = 0x2f8ac4u;
    // NOP
label_2f8ac8:
    // 0x2f8ac8: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x2f8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2f8acc: 0x8e260120  lw          $a2, 0x120($s1)
    ctx->pc = 0x2f8accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_2f8ad0:
    // 0x2f8ad0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2F8AD0u;
    {
        const bool branch_taken_0x2f8ad0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AD0u;
        // 0x2f8ad4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ad0) {
            ctx->pc = 0x2F8B08u;
            goto label_2f8b08;
        }
    }
    ctx->pc = 0x2F8AD8u;
    // 0x2f8ad8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8adc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8ADCu;
    {
        const bool branch_taken_0x2f8adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ADCu;
        // 0x2f8ae0: 0xc42823  subu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8adc) {
            ctx->pc = 0x2F8AF4u;
            goto label_2f8af4;
        }
    }
    ctx->pc = 0x2F8AE4u;
    // 0x2f8ae4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8ae8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f8aec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8AECu;
    {
        const bool branch_taken_0x2f8aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AECu;
        // 0x2f8af0: 0x28aa0009  slti        $t2, $a1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aec) {
            ctx->pc = 0x2F8B08u;
            goto label_2f8b08;
        }
    }
    ctx->pc = 0x2F8AF4u;
label_2f8af4:
    // 0x2f8af4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f8af8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f8afc: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x2f8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2f8b00: 0x8e260120  lw          $a2, 0x120($s1)
    ctx->pc = 0x2f8b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f8b04: 0x28aa0009  slti        $t2, $a1, 0x9
    ctx->pc = 0x2f8b04u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_2f8b08:
    // 0x2f8b08: 0x8e270124  lw          $a3, 0x124($s1)
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x2f8b0c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2f8b10: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x2f8b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f8b14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8B14u;
    {
        const bool branch_taken_0x2f8b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B14u;
        // 0x2f8b18: 0x444023  subu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b14) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8B1Cu;
    // 0x2f8b1c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8B1Cu;
    {
        const bool branch_taken_0x2f8b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B1Cu;
        // 0x2f8b20: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b1c) {
            ctx->pc = 0x2F8B28u;
            goto label_2f8b28;
        }
    }
    ctx->pc = 0x2F8B24u;
label_2f8b24:
    // 0x2f8b24: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2f8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2f8b28:
    // 0x2f8b28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f8b2c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2f8b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2f8b30: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2f8b30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f8b34: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2f8b34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2f8b38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f8b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b3c: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x2f8b3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8b40: 0x124180a  movz        $v1, $t1, $a0
    ctx->pc = 0x2f8b40u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x2f8b44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8B44u;
    {
        const bool branch_taken_0x2f8b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B44u;
        // 0x2f8b48: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b44) {
            ctx->pc = 0x2F8B58u;
            goto label_2f8b58;
        }
    }
    ctx->pc = 0x2F8B4Cu;
    // 0x2f8b4c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f8b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8B50u;
    {
        const bool branch_taken_0x2f8b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B50u;
        // 0x2f8b54: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b50) {
            ctx->pc = 0x2F8B64u;
            goto label_2f8b64;
        }
    }
    ctx->pc = 0x2F8B58u;
label_2f8b58:
    // 0x2f8b58: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f8b5c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8b60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8b64:
    // 0x2f8b64: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2f8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2f8b68: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2f8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2f8b6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f8b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b70: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2f8b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8b74: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x2f8b74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x2f8b78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8B78u;
    {
        const bool branch_taken_0x2f8b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B78u;
        // 0x2f8b7c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b78) {
            ctx->pc = 0x2F8B90u;
            goto label_2f8b90;
        }
    }
    ctx->pc = 0x2F8B80u;
    // 0x2f8b80: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8b84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8B84u;
    {
        const bool branch_taken_0x2f8b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B84u;
        // 0x2f8b88: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b84) {
            ctx->pc = 0x2F8B9Cu;
            goto label_2f8b9c;
        }
    }
    ctx->pc = 0x2F8B8Cu;
    // 0x2f8b8c: 0x0  nop
    ctx->pc = 0x2f8b8cu;
    // NOP
label_2f8b90:
    // 0x2f8b90: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8b94: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8b9c:
    // 0x2f8b9c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f8ba0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2f8ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2f8ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8BA4u;
    {
        const bool branch_taken_0x2f8ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ba4) {
            ctx->pc = 0x2F8BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8BA4u;
            // 0x2f8ba8: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8BB8u;
            goto label_2f8bb8;
        }
    }
    ctx->pc = 0x2F8BACu;
    // 0x2f8bac: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8BACu;
    {
        const bool branch_taken_0x2f8bac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BACu;
        // 0x2f8bb0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bac) {
            ctx->pc = 0x2F8BB8u;
            goto label_2f8bb8;
        }
    }
    ctx->pc = 0x2F8BB4u;
    // 0x2f8bb4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x2f8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2f8bb8:
    // 0x2f8bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f8bbc: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x2f8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f8bc0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2f8bc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f8bc4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2f8bc4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2f8bc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f8bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bcc: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x2f8bccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8bd0: 0x144180a  movz        $v1, $t2, $a0
    ctx->pc = 0x2f8bd0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x2f8bd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8BD4u;
    {
        const bool branch_taken_0x2f8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BD4u;
        // 0x2f8bd8: 0xae22012c  sw          $v0, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bd4) {
            ctx->pc = 0x2F8BE8u;
            goto label_2f8be8;
        }
    }
    ctx->pc = 0x2F8BDCu;
    // 0x2f8bdc: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f8be0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8BE0u;
    {
        const bool branch_taken_0x2f8be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BE0u;
        // 0x2f8be4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8be0) {
            ctx->pc = 0x2F8BF4u;
            goto label_2f8bf4;
        }
    }
    ctx->pc = 0x2F8BE8u;
label_2f8be8:
    // 0x2f8be8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f8bec: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8bf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8bf4:
    // 0x2f8bf4: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2f8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2f8bf8: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x2f8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x2f8bfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f8bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c00: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2f8c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8c04: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x2f8c04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x2f8c08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8C08u;
    {
        const bool branch_taken_0x2f8c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C08u;
        // 0x2f8c0c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c08) {
            ctx->pc = 0x2F8C20u;
            goto label_2f8c20;
        }
    }
    ctx->pc = 0x2F8C10u;
    // 0x2f8c10: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8c14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8C14u;
    {
        const bool branch_taken_0x2f8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C14u;
        // 0x2f8c18: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c14) {
            ctx->pc = 0x2F8C2Cu;
            goto label_2f8c2c;
        }
    }
    ctx->pc = 0x2F8C1Cu;
    // 0x2f8c1c: 0x0  nop
    ctx->pc = 0x2f8c1cu;
    // NOP
label_2f8c20:
    // 0x2f8c20: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f8c24: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f8c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8c2c:
    // 0x2f8c2c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f8c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f8c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f8c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f8c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8c3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f8c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f8c40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f8c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8c44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f8c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f8c48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f8c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8c4c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2f8c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f8c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C50u;
        // 0x2f8c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8C58u;
}
