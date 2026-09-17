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

// Function: sub_002FA5A8
// Address: 0x2fa5a8 - 0x2fa678
void sub_002FA5A8_0x2fa5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA5A8_0x2fa5a8");
#endif

    switch (ctx->pc) {
        case 0x2fa5bcu: goto label_2fa5bc;
        case 0x2fa620u: goto label_2fa620;
        case 0x2fa654u: goto label_2fa654;
        case 0x2fa65cu: goto label_2fa65c;
        case 0x2fa664u: goto label_2fa664;
        default: break;
    }

    ctx->pc = 0x2fa5a8u;

    // 0x2fa5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa5b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fa5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fa5b4: 0xc0bbf56  jal         func_2EFD58
    ctx->pc = 0x2FA5B4u;
    SET_GPR_U32(ctx, 31, 0x2FA5BCu);
    ctx->pc = 0x2FA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5B4u;
    // 0x2fa5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD58u, 0x2FA5B4u, 0x2FA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5BCu;
label_2fa5bc:
    // 0x2fa5bc: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x2fa5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2fa5c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa5c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA5C4u;
    {
        const bool branch_taken_0x2fa5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5C4u;
        // 0x2fa5c8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5c4) {
            ctx->pc = 0x2FA5E0u;
            goto label_2fa5e0;
        }
    }
    ctx->pc = 0x2FA5CCu;
    // 0x2fa5cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2fa5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fa5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa5d8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA5D8u;
    {
        const bool branch_taken_0x2fa5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa5d8) {
            ctx->pc = 0x2FA5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA5D8u;
            // 0x2fa5dc: 0xaca00120  sw          $zero, 0x120($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA5F0u;
            goto label_2fa5f0;
        }
    }
    ctx->pc = 0x2FA5E0u;
label_2fa5e0:
    // 0x2fa5e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa5ec: 0xaca00120  sw          $zero, 0x120($a1)
    ctx->pc = 0x2fa5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x120u, _value); } while (0);
label_2fa5f0:
    // 0x2fa5f0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2fa5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fa5f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA5F4u;
    {
        const bool branch_taken_0x2fa5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5f4) {
            ctx->pc = 0x2FA5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA5F4u;
            // 0x2fa5f8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA610u;
            goto label_2fa610;
        }
    }
    ctx->pc = 0x2FA5FCu;
    // 0x2fa5fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa600: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2fa600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2fa604: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA604u;
    {
        const bool branch_taken_0x2fa604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa604) {
            ctx->pc = 0x2FA618u;
            goto label_2fa618;
        }
    }
    ctx->pc = 0x2FA60Cu;
    // 0x2fa60c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2fa60cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2fa610:
    // 0x2fa610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa614: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2fa614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2fa618:
    // 0x2fa618: 0xc0bdcf4  jal         func_2F73D0
    ctx->pc = 0x2FA618u;
    SET_GPR_U32(ctx, 31, 0x2FA620u);
    ctx->pc = 0x2F73D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F73D0u, 0x2FA618u, 0x2FA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA620u;
label_2fa620:
    // 0x2fa620: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2fa620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2fa624: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa628: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA628u;
    {
        const bool branch_taken_0x2fa628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa628) {
            ctx->pc = 0x2FA62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA628u;
            // 0x2fa62c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA644u;
            goto label_2fa644;
        }
    }
    ctx->pc = 0x2FA630u;
    // 0x2fa630: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa634: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa638: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA638u;
    {
        const bool branch_taken_0x2fa638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa638) {
            ctx->pc = 0x2FA64Cu;
            goto label_2fa64c;
        }
    }
    ctx->pc = 0x2FA640u;
    // 0x2fa640: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa644:
    // 0x2fa644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa648: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa64c:
    // 0x2fa64c: 0xc0be05e  jal         func_2F8178
    ctx->pc = 0x2FA64Cu;
    SET_GPR_U32(ctx, 31, 0x2FA654u);
    ctx->pc = 0x2F8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8178u, 0x2FA64Cu, 0x2FA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA654u;
label_2fa654:
    // 0x2fa654: 0xc092486  jal         func_249218
    ctx->pc = 0x2FA654u;
    SET_GPR_U32(ctx, 31, 0x2FA65Cu);
    ctx->pc = 0x2FA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA654u;
    // 0x2fa658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2FA654u, 0x2FA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA65Cu;
label_2fa65c:
    // 0x2fa65c: 0xc0b45ca  jal         func_2D1728
    ctx->pc = 0x2FA65Cu;
    SET_GPR_U32(ctx, 31, 0x2FA664u);
    ctx->pc = 0x2D1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1728u, 0x2FA65Cu, 0x2FA664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA664u;
label_2fa664:
    // 0x2fa664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fa668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA66Cu;
        // 0x2fa670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA674u;
    // 0x2fa674: 0x0  nop
    ctx->pc = 0x2fa674u;
    // NOP
    ctx->pc = 0x2fa678u;
}
