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

// Function: sub_002F6978
// Address: 0x2f6978 - 0x2f6a30
void sub_002F6978_0x2f6978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6978_0x2f6978");
#endif

    ctx->pc = 0x2f6978u;

    // 0x2f6978: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x2f6978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x2f697c: 0x30a52060  andi        $a1, $a1, 0x2060
    ctx->pc = 0x2f697cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8288);
    // 0x2f6980: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F6980u;
    {
        const bool branch_taken_0x2f6980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6980u;
        // 0x2f6984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6980) {
            ctx->pc = 0x2F6A24u;
            goto label_2f6a24;
        }
    }
    ctx->pc = 0x2F6988u;
    // 0x2f6988: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F6988u;
    {
        const bool branch_taken_0x2f6988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6988) {
            ctx->pc = 0x2F6A24u;
            goto label_2f6a24;
        }
    }
    ctx->pc = 0x2F6990u;
    // 0x2f6990: 0x8c850120  lw          $a1, 0x120($a0)
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x2f6994: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x2f6994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2f6998: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F6998u;
    {
        const bool branch_taken_0x2f6998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6998) {
            ctx->pc = 0x2F6A24u;
            goto label_2f6a24;
        }
    }
    ctx->pc = 0x2F69A0u;
    // 0x2f69a0: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F69A0u;
    {
        const bool branch_taken_0x2f69a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A0u;
        // 0x2f69a4: 0xac800124  sw          $zero, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69a0) {
            ctx->pc = 0x2F69E0u;
            goto label_2f69e0;
        }
    }
    ctx->pc = 0x2F69A8u;
    // 0x2f69a8: 0x24840128  addiu       $a0, $a0, 0x128
    ctx->pc = 0x2f69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    // 0x2f69ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f69b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F69B0u;
    {
        const bool branch_taken_0x2f69b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69B0u;
        // 0x2f69b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69b0) {
            ctx->pc = 0x2F69C8u;
            goto label_2f69c8;
        }
    }
    ctx->pc = 0x2F69B8u;
    // 0x2f69b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f69bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f69c0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F69C0u;
    {
        const bool branch_taken_0x2f69c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f69c0) {
            ctx->pc = 0x2F69C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F69C0u;
            // 0x2f69c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F69D8u;
            goto label_2f69d8;
        }
    }
    ctx->pc = 0x2F69C8u;
label_2f69c8:
    // 0x2f69c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f69cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f69ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f69d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f69d8:
    // 0x2f69d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F69D8u;
    {
        const bool branch_taken_0x2f69d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69D8u;
        // 0x2f69dc: 0xaca200fc  sw          $v0, 0xFC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69d8) {
            ctx->pc = 0x2F6A20u;
            goto label_2f6a20;
        }
    }
    ctx->pc = 0x2F69E0u;
label_2f69e0:
    // 0x2f69e0: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x2f69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2f69e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F69E4u;
    {
        const bool branch_taken_0x2f69e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69E4u;
        // 0x2f69e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69e4) {
            ctx->pc = 0x2F6A24u;
            goto label_2f6a24;
        }
    }
    ctx->pc = 0x2F69ECu;
    // 0x2f69ec: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x2f69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x2f69f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f69f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F69F4u;
    {
        const bool branch_taken_0x2f69f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69F4u;
        // 0x2f69f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69f4) {
            ctx->pc = 0x2F6A0Cu;
            goto label_2f6a0c;
        }
    }
    ctx->pc = 0x2F69FCu;
    // 0x2f69fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f6a00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f6a04: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6A04u;
    {
        const bool branch_taken_0x2f6a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a04) {
            ctx->pc = 0x2F6A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6A04u;
            // 0x2f6a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A1Cu;
            goto label_2f6a1c;
        }
    }
    ctx->pc = 0x2F6A0Cu;
label_2f6a0c:
    // 0x2f6a0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f6a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a14: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f6a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6a1c:
    // 0x2f6a1c: 0xaca20114  sw          $v0, 0x114($a1)
    ctx->pc = 0x2f6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 2));
label_2f6a20:
    // 0x2f6a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6a24:
    // 0x2f6a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6A2Cu;
    // 0x2f6a2c: 0x0  nop
    ctx->pc = 0x2f6a2cu;
    // NOP
    ctx->pc = 0x2f6a30u;
}
