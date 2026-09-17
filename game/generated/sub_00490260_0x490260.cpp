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

// Function: sub_00490260
// Address: 0x490260 - 0x4902f8
void sub_00490260_0x490260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490260_0x490260");
#endif

    switch (ctx->pc) {
        case 0x4902b8u: goto label_4902b8;
        case 0x4902d0u: goto label_4902d0;
        default: break;
    }

    ctx->pc = 0x490260u;

    // 0x490260: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x490260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x490264: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x490264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x490268: 0x8444f8e8  lh          $a0, -0x718($v0)
    ctx->pc = 0x490268u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72F8E8u));
    // 0x49026c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490270: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x490270u;
    {
        const bool branch_taken_0x490270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x490274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490270u;
        // 0x490274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490270) {
            ctx->pc = 0x4902E8u;
            goto label_4902e8;
        }
    }
    ctx->pc = 0x490278u;
    // 0x490278: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x490278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49027c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49027Cu;
    {
        const bool branch_taken_0x49027c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49027c) {
            ctx->pc = 0x490280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49027Cu;
            // 0x490280: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x490298u;
            goto label_490298;
        }
    }
    ctx->pc = 0x490284u;
    // 0x490284: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x490284u;
    {
        const bool branch_taken_0x490284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x490288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490284u;
        // 0x490288: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490284) {
            ctx->pc = 0x4902B0u;
            goto label_4902b0;
        }
    }
    ctx->pc = 0x49028Cu;
    // 0x49028c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49028Cu;
    {
        const bool branch_taken_0x49028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49028c) {
            ctx->pc = 0x4902ECu;
            goto label_4902ec;
        }
    }
    ctx->pc = 0x490294u;
    // 0x490294: 0x0  nop
    ctx->pc = 0x490294u;
    // NOP
label_490298:
    // 0x490298: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x490298u;
    {
        const bool branch_taken_0x490298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490298u;
        // 0x49029c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490298) {
            ctx->pc = 0x4902C8u;
            goto label_4902c8;
        }
    }
    ctx->pc = 0x4902A0u;
    // 0x4902a0: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4902A0u;
    {
        const bool branch_taken_0x4902a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4902A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902A0u;
        // 0x4902a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902a0) {
            ctx->pc = 0x4902E0u;
            goto label_4902e0;
        }
    }
    ctx->pc = 0x4902A8u;
    // 0x4902a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4902A8u;
    {
        const bool branch_taken_0x4902a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902a8) {
            ctx->pc = 0x4902ECu;
            goto label_4902ec;
        }
    }
    ctx->pc = 0x4902B0u;
label_4902b0:
    // 0x4902b0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4902B0u;
    SET_GPR_U32(ctx, 31, 0x4902B8u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4902B0u, 0x4902B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4902B8u;
label_4902b8:
    // 0x4902b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4902b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4902bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4902bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4902c0: 0x8128592  j           func_4A1648
    ctx->pc = 0x4902C0u;
    ctx->pc = 0x4902C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4902C0u;
    // 0x4902c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1648u, 0x4902C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4902C8u;
label_4902c8:
    // 0x4902c8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4902C8u;
    SET_GPR_U32(ctx, 31, 0x4902D0u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4902C8u, 0x4902D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4902D0u;
label_4902d0:
    // 0x4902d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4902d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4902d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4902d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4902d8: 0x81288c0  j           func_4A2300
    ctx->pc = 0x4902D8u;
    ctx->pc = 0x4902DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4902D8u;
    // 0x4902dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2300u, 0x4902D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4902E0u;
label_4902e0:
    // 0x4902e0: 0x81239a6  j           func_48E698
    ctx->pc = 0x4902E0u;
    ctx->pc = 0x4902E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4902E0u;
    // 0x4902e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E698u, 0x4902E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4902E8u;
label_4902e8:
    // 0x4902e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4902e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4902ec:
    // 0x4902ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4902ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4902F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902ECu;
        // 0x4902f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4902ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4902F4u;
    // 0x4902f4: 0x0  nop
    ctx->pc = 0x4902f4u;
    // NOP
    ctx->pc = 0x4902f8u;
}
