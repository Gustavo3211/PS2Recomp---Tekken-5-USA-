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

// Function: sub_004A6D98
// Address: 0x4a6d98 - 0x4a6e98
void sub_004A6D98_0x4a6d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6D98_0x4a6d98");
#endif

    switch (ctx->pc) {
        case 0x4a6db0u: goto label_4a6db0;
        default: break;
    }

    ctx->pc = 0x4a6d98u;

    // 0x4a6d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a6d9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a6d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a6da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6da4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a6da8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A6DA8u;
    SET_GPR_U32(ctx, 31, 0x4A6DB0u);
    ctx->pc = 0x4A6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6DA8u;
    // 0x4a6dac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A6DA8u, 0x4A6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6DB0u;
label_4a6db0:
    // 0x4a6db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a6db4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a6db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6db8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a6db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6dbc: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4a6dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x4a6dc0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4A6DC0u;
    {
        const bool branch_taken_0x4a6dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DC0u;
        // 0x4a6dc4: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6dc0) {
            ctx->pc = 0x4A6E84u;
            goto label_4a6e84;
        }
    }
    ctx->pc = 0x4A6DC8u;
    // 0x4a6dc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6dcc: 0x240200d1  addiu       $v0, $zero, 0xD1
    ctx->pc = 0x4a6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x4a6dd0: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x4a6dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6dd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6dd8: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x4a6dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6ddc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6de0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a6de4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6dec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a6decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a6df0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A6DF0u;
    {
        const bool branch_taken_0x4a6df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DF0u;
        // 0x4a6df4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6df0) {
            ctx->pc = 0x4A6E18u;
            goto label_4a6e18;
        }
    }
    ctx->pc = 0x4A6DF8u;
    // 0x4a6df8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6dfc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a6e00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a6e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a6e04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a6e08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6e0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4A6E0Cu;
    {
        const bool branch_taken_0x4a6e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E0Cu;
        // 0x4a6e10: 0xa485000c  sh          $a1, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e0c) {
            ctx->pc = 0x4A6E44u;
            goto label_4a6e44;
        }
    }
    ctx->pc = 0x4A6E14u;
    // 0x4a6e14: 0x0  nop
    ctx->pc = 0x4a6e14u;
    // NOP
label_4a6e18:
    // 0x4a6e18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6e1c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x4a6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x4a6e20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6e24: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x4a6e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4a6e28: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a6e2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6e30: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a6e34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a6e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a6e38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a6e3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6e40: 0xa465000c  sh          $a1, 0xC($v1)
    ctx->pc = 0x4a6e40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 5));
label_4a6e44:
    // 0x4a6e44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6e48: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x4a6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a6e4c: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x4a6e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4a6e50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a6e54: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6e58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a6e5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a6e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6e64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6e68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a6e6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6e70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a6e74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6e78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6e7c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a6e80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4a6e84:
    // 0x4a6e84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a6e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6e88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a6e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a6e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E8Cu;
        // 0x4a6e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6E94u;
    // 0x4a6e94: 0x0  nop
    ctx->pc = 0x4a6e94u;
    // NOP
    ctx->pc = 0x4a6e98u;
}
