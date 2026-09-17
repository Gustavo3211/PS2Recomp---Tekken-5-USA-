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

// Function: sub_00492050
// Address: 0x492050 - 0x4920f8
void sub_00492050_0x492050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492050_0x492050");
#endif

    ctx->pc = 0x492050u;

    // 0x492050: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x492050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x492054: 0x24631500  addiu       $v1, $v1, 0x1500
    ctx->pc = 0x492054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5376));
    // 0x492058: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x49205c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x492060: 0x8442e804  lh          $v0, -0x17FC($v0)
    ctx->pc = 0x492060u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x492064: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x492064u;
    {
        const bool branch_taken_0x492064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492064u;
        // 0x492068: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492064) {
            ctx->pc = 0x492080u;
            goto label_492080;
        }
    }
    ctx->pc = 0x49206Cu;
    // 0x49206c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49206cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x492070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x492074: 0x8442e806  lh          $v0, -0x17FA($v0)
    ctx->pc = 0x492074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961158)));
    // 0x492078: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x492078u;
    {
        const bool branch_taken_0x492078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492078) {
            ctx->pc = 0x4920F0u;
            goto label_4920f0;
        }
    }
    ctx->pc = 0x492080u;
label_492080:
    // 0x492080: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x492080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x492084: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x492084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x492088: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x492088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x49208c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x492090: 0x24a60058  addiu       $a2, $a1, 0x58
    ctx->pc = 0x492090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x492094: 0x24a5005c  addiu       $a1, $a1, 0x5C
    ctx->pc = 0x492094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x492098: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x492098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6D8u));
    // 0x49209c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49209cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4920a0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4920a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4920a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4920a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D6DCu));
    // 0x4920a8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x4920a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x4920ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4920acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72D6DCu));
    // 0x4920b0: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x4920b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4920b4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4920b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4920b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4920bc: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x4920bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4920c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4920c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4920c4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4920c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4920c8: 0x94e20014  lhu         $v0, 0x14($a3)
    ctx->pc = 0x4920c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4920cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4920ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4920d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4920d4: 0x94e20018  lhu         $v0, 0x18($a3)
    ctx->pc = 0x4920d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4920d8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4920d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4920dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4920dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4920e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4920e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6DCu, _value); } while (0);
    // 0x4920e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4920e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6D8u));
    // 0x4920e8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4920e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4920ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4920ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D6D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6D8u, _value); } while (0);
label_4920f0:
    // 0x4920f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4920F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4920F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4920F8u;
}
