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

// Function: sub_004A6CD8
// Address: 0x4a6cd8 - 0x4a6d98
void sub_004A6CD8_0x4a6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6CD8_0x4a6cd8");
#endif

    switch (ctx->pc) {
        case 0x4a6ce8u: goto label_4a6ce8;
        case 0x4a6cfcu: goto label_4a6cfc;
        default: break;
    }

    ctx->pc = 0x4a6cd8u;

    // 0x4a6cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a6cdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a6ce0: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A6CE0u;
    SET_GPR_U32(ctx, 31, 0x4A6CE8u);
    ctx->pc = 0x4A6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6CE0u;
    // 0x4a6ce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A6CE0u, 0x4A6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6CE8u;
label_4a6ce8:
    // 0x4a6ce8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A6CE8u;
    {
        const bool branch_taken_0x4a6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CE8u;
        // 0x4a6cec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ce8) {
            ctx->pc = 0x4A6D8Cu;
            goto label_4a6d8c;
        }
    }
    ctx->pc = 0x4A6CF0u;
    // 0x4a6cf0: 0x240200d6  addiu       $v0, $zero, 0xD6
    ctx->pc = 0x4a6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x4a6cf4: 0xc124620  jal         func_491880
    ctx->pc = 0x4A6CF4u;
    SET_GPR_U32(ctx, 31, 0x4A6CFCu);
    ctx->pc = 0x4A6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6CF4u;
    // 0x4a6cf8: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A6CF4u, 0x4A6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6CFCu;
label_4a6cfc:
    // 0x4a6cfc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a6cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6d00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d04: 0x34019800  ori         $at, $zero, 0x9800
    ctx->pc = 0x4a6d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x4a6d08: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4a6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a6d0c: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x4a6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
    // 0x4a6d10: 0x24087fff  addiu       $t0, $zero, 0x7FFF
    ctx->pc = 0x4a6d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a6d14: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4a6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x4a6d18: 0x24c68e80  addiu       $a2, $a2, -0x7180
    ctx->pc = 0x4a6d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938240));
    // 0x4a6d1c: 0xc72824  and         $a1, $a2, $a3
    ctx->pc = 0x4a6d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4a6d20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d24: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x4a6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4a6d28: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x4a6d2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d30: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4a6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4a6d34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a6d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a6d38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a6d3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d40: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x4a6d40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6d44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d48: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a6d4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6d54: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a6d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a6d58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a6d5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d60: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x4a6d60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6d64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d68: 0xa440002c  sh          $zero, 0x2C($v0)
    ctx->pc = 0x4a6d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6d6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d70: 0xa4600024  sh          $zero, 0x24($v1)
    ctx->pc = 0x4a6d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d78: 0xa445002e  sh          $a1, 0x2E($v0)
    ctx->pc = 0x4a6d78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6d7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d80: 0xa4660030  sh          $a2, 0x30($v1)
    ctx->pc = 0x4a6d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a6d84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6d88: 0xa4480026  sh          $t0, 0x26($v0)
    ctx->pc = 0x4a6d88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 8));
label_4a6d8c:
    // 0x4a6d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6d90: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D90u;
        // 0x4a6d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6D98u;
}
