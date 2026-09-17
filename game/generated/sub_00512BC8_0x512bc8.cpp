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

// Function: sub_00512BC8
// Address: 0x512bc8 - 0x512c38
void sub_00512BC8_0x512bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512BC8_0x512bc8");
#endif

    ctx->pc = 0x512bc8u;

    // 0x512bc8: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x512bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x512bcc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x512bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x512bd0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x512bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x512bd4: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x512bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x512bd8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x512bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x512bdc: 0x34c62004  ori         $a2, $a2, 0x2004
    ctx->pc = 0x512bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8196);
    // 0x512be0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x512be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x512be4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512be8: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x512be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
    // 0x512bec: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x512becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512bf0: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x512bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x512bf4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x512bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x512bf8: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x512bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x512bfc: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x512bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x512c00: 0x24674ef0  addiu       $a3, $v1, 0x4EF0
    ctx->pc = 0x512c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 20208));
    // 0x512c04: 0x24654ef2  addiu       $a1, $v1, 0x4EF2
    ctx->pc = 0x512c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20210));
    // 0x512c08: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x512c08u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x8FEA44u));
    // 0x512c0c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x512c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8FEA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FEA44u, _value); } while (0);
    // 0x512c10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x512c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x512c14: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x512c14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x512c18: 0xac644ef4  sw          $a0, 0x4EF4($v1)
    ctx->pc = 0x512c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x903F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903F74u, _value); } while (0);
    // 0x512c1c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x512c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x903F70u));
    // 0x512c20: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x512c20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x903F72u));
    // 0x512c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x512c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x512c28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x512c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x512c2c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x512c2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x903F70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903F70u, _value); } while (0);
    // 0x512c30: 0x3e00008  jr          $ra
    ctx->pc = 0x512C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512C30u;
        // 0x512c34: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512C38u;
}
