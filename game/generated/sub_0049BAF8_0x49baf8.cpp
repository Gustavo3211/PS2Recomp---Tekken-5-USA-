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

// Function: sub_0049BAF8
// Address: 0x49baf8 - 0x49bb88
void sub_0049BAF8_0x49baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049BAF8_0x49baf8");
#endif

    ctx->pc = 0x49baf8u;

    // 0x49baf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49bafc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x49bafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49bb04: 0x84c201c2  lh          $v0, 0x1C2($a2)
    ctx->pc = 0x49bb04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 450)));
    // 0x49bb08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x49BB08u;
    {
        const bool branch_taken_0x49bb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB08u;
        // 0x49bb0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb08) {
            ctx->pc = 0x49BB80u;
            goto label_49bb80;
        }
    }
    ctx->pc = 0x49BB10u;
    // 0x49bb10: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49bb14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x49bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49bb18: 0x24670b80  addiu       $a3, $v1, 0xB80
    ctx->pc = 0x49bb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2944));
    // 0x49bb1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B80u));
    // 0x49bb20: 0xa44501c2  sh          $a1, 0x1C2($v0)
    ctx->pc = 0x49bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 5));
    // 0x49bb24: 0x94c401be  lhu         $a0, 0x1BE($a2)
    ctx->pc = 0x49bb24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 446)));
    // 0x49bb28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B80u));
    // 0x49bb2c: 0xa44401c0  sh          $a0, 0x1C0($v0)
    ctx->pc = 0x49bb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 448), (uint16_t)GPR_U32(ctx, 4));
    // 0x49bb30: 0x84c3016a  lh          $v1, 0x16A($a2)
    ctx->pc = 0x49bb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
    // 0x49bb34: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x49BB34u;
    {
        const bool branch_taken_0x49bb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB34u;
        // 0x49bb38: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb34) {
            ctx->pc = 0x49BB68u;
            goto label_49bb68;
        }
    }
    ctx->pc = 0x49BB3Cu;
    // 0x49bb3c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49bb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49bb44: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x49bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x49bb48: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x49bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x49bb4c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49bb4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49bb50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49bb54: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49bb58: 0xa4a4fa44  sh          $a0, -0x5BC($a1)
    ctx->pc = 0x49bb58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294965828), (uint16_t)GPR_U32(ctx, 4));
    // 0x49bb5c: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49BB5Cu;
    ctx->pc = 0x49BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BB5Cu;
    // 0x49bb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49BB64u;
    // 0x49bb64: 0x0  nop
    ctx->pc = 0x49bb64u;
    // NOP
label_49bb68:
    // 0x49bb68: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49bb6c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49bb70: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x49bb70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49bb74: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49BB74u;
    ctx->pc = 0x49BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BB74u;
    // 0x49bb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49BB7Cu;
    // 0x49bb7c: 0x0  nop
    ctx->pc = 0x49bb7cu;
    // NOP
label_49bb80:
    // 0x49bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x49BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB80u;
        // 0x49bb84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BB88u;
}
