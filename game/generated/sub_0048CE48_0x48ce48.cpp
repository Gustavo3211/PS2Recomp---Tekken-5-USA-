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

// Function: sub_0048CE48
// Address: 0x48ce48 - 0x48ceb8
void sub_0048CE48_0x48ce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CE48_0x48ce48");
#endif

    ctx->pc = 0x48ce48u;

    // 0x48ce48: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x48ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48ce4c: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x48ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x48ce50: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x48ce50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48ce54: 0x24425b80  addiu       $v0, $v0, 0x5B80
    ctx->pc = 0x48ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    // 0x48ce58: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x48ce58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x48ce5c: 0x34c65cc4  ori         $a2, $a2, 0x5CC4
    ctx->pc = 0x48ce5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23748);
    // 0x48ce60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x48ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48ce64: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48ce64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48ce68: 0x34215cc0  ori         $at, $at, 0x5CC0
    ctx->pc = 0x48ce68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23744);
    // 0x48ce6c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x48ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48ce70: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x48ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x48ce74: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48ce78: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x48ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x48ce7c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48ce80: 0x24672370  addiu       $a3, $v1, 0x2370
    ctx->pc = 0x48ce80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
    // 0x48ce84: 0x24652372  addiu       $a1, $v1, 0x2372
    ctx->pc = 0x48ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 9074));
    // 0x48ce88: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x48ce88u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7DB844u));
    // 0x48ce8c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x48ce8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7DB844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7DB844u, _value); } while (0);
    // 0x48ce90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x48ce94: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x48ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x48ce98: 0xac642374  sw          $a0, 0x2374($v1)
    ctx->pc = 0x48ce98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F9F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9F4u, _value); } while (0);
    // 0x48ce9c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x48ce9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F9F0u));
    // 0x48cea0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x48cea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9F2u));
    // 0x48cea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48cea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48ceac: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x48ceacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9F0u, _value); } while (0);
    // 0x48ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x48CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEB0u;
        // 0x48ceb4: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CEB8u;
}
