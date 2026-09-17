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

// Function: sub_00110CE8
// Address: 0x110ce8 - 0x110d78
void sub_00110CE8_0x110ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110CE8_0x110ce8");
#endif

    ctx->pc = 0x110ce8u;

    // 0x110ce8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x110ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cec: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x110cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x110cf0: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x110cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x110cf4: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x110cf4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x110cf8: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x110cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x110cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110CFCu;
    {
        const bool branch_taken_0x110cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CFCu;
        // 0x110d00: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cfc) {
            ctx->pc = 0x110D0Cu;
            goto label_110d0c;
        }
    }
    ctx->pc = 0x110D04u;
    // 0x110d04: 0x3e00008  jr          $ra
    ctx->pc = 0x110D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D04u;
        // 0x110d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D0Cu;
label_110d0c:
    // 0x110d0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110D0Cu;
    {
        const bool branch_taken_0x110d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D0Cu;
        // 0x110d10: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d0c) {
            ctx->pc = 0x110D1Cu;
            goto label_110d1c;
        }
    }
    ctx->pc = 0x110D14u;
    // 0x110d14: 0x3e00008  jr          $ra
    ctx->pc = 0x110D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D14u;
        // 0x110d18: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D1Cu;
label_110d1c:
    // 0x110d1c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x110d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x110d20: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x110d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x110d24: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x110d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x110d28: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x110D28u;
    {
        const bool branch_taken_0x110d28 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x110D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D28u;
        // 0x110d2c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d28) {
            ctx->pc = 0x110D60u;
            goto label_110d60;
        }
    }
    ctx->pc = 0x110D30u;
    // 0x110d30: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x110d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x110d34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x110d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110d38: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x110d38u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x110d3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x110d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x110d40: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x110d40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x110d44: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x110d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x110d48: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x110d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x110d4c: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110D4Cu;
    {
        const bool branch_taken_0x110d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x110d4c) {
            ctx->pc = 0x110D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D4Cu;
            // 0x110d50: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D6Cu;
            goto label_110d6c;
        }
    }
    ctx->pc = 0x110D54u;
    // 0x110d54: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x110d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x110d58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110D58u;
    {
        const bool branch_taken_0x110d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D58u;
        // 0x110d5c: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d58) {
            ctx->pc = 0x110D6Cu;
            goto label_110d6c;
        }
    }
    ctx->pc = 0x110D60u;
label_110d60:
    // 0x110d60: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x110d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x110d64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x110d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x110d68: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x110d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_110d6c:
    // 0x110d6c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x110d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x110d70: 0x3e00008  jr          $ra
    ctx->pc = 0x110D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D70u;
        // 0x110d74: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D78u;
}
