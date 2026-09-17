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

// Function: sub_0023D0A8
// Address: 0x23d0a8 - 0x23d140
void sub_0023D0A8_0x23d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D0A8_0x23d0a8");
#endif

    ctx->pc = 0x23d0a8u;

    // 0x23d0a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23d0ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23d0b0: 0x8c45885c  lw          $a1, -0x77A4($v0)
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x23d0b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x23d0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0b8: 0x8c6683c0  lw          $a2, -0x7C40($v1)
    ctx->pc = 0x23d0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x23d0bc: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x23d0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x23d0c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23D0C0u;
    {
        const bool branch_taken_0x23d0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0C0u;
        // 0x23d0c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0c0) {
            ctx->pc = 0x23D11Cu;
            goto label_23d11c;
        }
    }
    ctx->pc = 0x23D0C8u;
    // 0x23d0c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23d0cc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23d0d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d0d4: 0x8c63aee0  lw          $v1, -0x5120($v1)
    ctx->pc = 0x23d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946528)));
    // 0x23d0d8: 0x600008  jr          $v1
    ctx->pc = 0x23D0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D0E0u: goto label_23d0e0;
            case 0x23D0E8u: goto label_23d0e8;
            case 0x23D110u: goto label_23d110;
            case 0x23D11Cu: goto label_23d11c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D0D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23D0E0u;
label_23d0e0:
    // 0x23d0e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23D0E0u;
    {
        const bool branch_taken_0x23d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0E0u;
        // 0x23d0e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0e0) {
            ctx->pc = 0x23D11Cu;
            goto label_23d11c;
        }
    }
    ctx->pc = 0x23D0E8u;
label_23d0e8:
    // 0x23d0e8: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x23d0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23d0ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D0ECu;
    {
        const bool branch_taken_0x23d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0ECu;
        // 0x23d0f0: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0ec) {
            ctx->pc = 0x23D120u;
            goto label_23d120;
        }
    }
    ctx->pc = 0x23D0F4u;
    // 0x23d0f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23d0f8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23d0fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d100: 0x8c63af10  lw          $v1, -0x50F0($v1)
    ctx->pc = 0x23d100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946576)));
    // 0x23d104: 0x600008  jr          $v1
    ctx->pc = 0x23D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D110u: goto label_23d110;
            case 0x23D118u: goto label_23d118;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23D10Cu;
    // 0x23d10c: 0x0  nop
    ctx->pc = 0x23d10cu;
    // NOP
label_23d110:
    // 0x23d110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23D110u;
    {
        const bool branch_taken_0x23d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D110u;
        // 0x23d114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d110) {
            ctx->pc = 0x23D11Cu;
            goto label_23d11c;
        }
    }
    ctx->pc = 0x23D118u;
label_23d118:
    // 0x23d118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d11c:
    // 0x23d11c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_23d120:
    // 0x23d120: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23d124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23d128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d12c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23d130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d134: 0x8c42af38  lw          $v0, -0x50C8($v0)
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946616)));
    // 0x23d138: 0x3e00008  jr          $ra
    ctx->pc = 0x23D138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D140u;
}
