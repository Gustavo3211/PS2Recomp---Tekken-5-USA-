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

// Function: sub_0050D078
// Address: 0x50d078 - 0x50d120
void sub_0050D078_0x50d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D078_0x50d078");
#endif

    ctx->pc = 0x50d078u;

    // 0x50d078: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d07c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50d080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50d084: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50d088: 0x8c45c674  lw          $a1, -0x398C($v0)
    ctx->pc = 0x50d088u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC674u));
    // 0x50d08c: 0x2484c65c  addiu       $a0, $a0, -0x39A4
    ctx->pc = 0x50d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952540));
    // 0x50d090: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50d090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC65Cu));
    // 0x50d094: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50d094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50d098: 0x84a30046  lh          $v1, 0x46($a1)
    ctx->pc = 0x50d098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x50d09c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d0a0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50d0a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d0a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50d0ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d0b0: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x50d0b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x50d0b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50d0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50d0b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d0bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50d0c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d0c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x50d0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50d0c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50d0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50d0cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50d0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d0d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50d0d4: 0x84a3004a  lh          $v1, 0x4A($a1)
    ctx->pc = 0x50d0d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 74)));
    // 0x50d0d8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50d0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50d0dc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x50D0DCu;
    {
        const bool branch_taken_0x50d0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D0DCu;
        // 0x50d0e0: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d0dc) {
            ctx->pc = 0x50D110u;
            goto label_50d110;
        }
    }
    ctx->pc = 0x50D0E4u;
    // 0x50d0e4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50d0e8: 0x8c82c670  lw          $v0, -0x3990($a0)
    ctx->pc = 0x50d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952560)));
    // 0x50d0ec: 0x2463c668  addiu       $v1, $v1, -0x3998
    ctx->pc = 0x50d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952552));
    // 0x50d0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d0f4: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x50d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x50d0f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x50d0f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC668u, _value); } while (0);
    // 0x50d0fc: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x50d0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x50d100: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50d100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50d104: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x50d104u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50d108: 0x8144c5a  j           func_513168
    ctx->pc = 0x50D108u;
    ctx->pc = 0x50D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D108u;
    // 0x50d10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50D110u;
label_50d110:
    // 0x50d110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d114: 0x3e00008  jr          $ra
    ctx->pc = 0x50D114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D114u;
        // 0x50d118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D11Cu;
    // 0x50d11c: 0x0  nop
    ctx->pc = 0x50d11cu;
    // NOP
    ctx->pc = 0x50d120u;
}
