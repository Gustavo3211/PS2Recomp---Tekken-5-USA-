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

// Function: sub_004A6C18
// Address: 0x4a6c18 - 0x4a6cd8
void sub_004A6C18_0x4a6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6C18_0x4a6c18");
#endif

    switch (ctx->pc) {
        case 0x4a6c18u: goto label_4a6c18;
        case 0x4a6c1cu: goto label_4a6c1c;
        case 0x4a6c20u: goto label_4a6c20;
        case 0x4a6c24u: goto label_4a6c24;
        case 0x4a6c28u: goto label_4a6c28;
        case 0x4a6c2cu: goto label_4a6c2c;
        case 0x4a6c30u: goto label_4a6c30;
        case 0x4a6c34u: goto label_4a6c34;
        case 0x4a6c38u: goto label_4a6c38;
        case 0x4a6c3cu: goto label_4a6c3c;
        case 0x4a6c40u: goto label_4a6c40;
        case 0x4a6c44u: goto label_4a6c44;
        case 0x4a6c48u: goto label_4a6c48;
        case 0x4a6c4cu: goto label_4a6c4c;
        case 0x4a6c50u: goto label_4a6c50;
        case 0x4a6c54u: goto label_4a6c54;
        case 0x4a6c58u: goto label_4a6c58;
        case 0x4a6c5cu: goto label_4a6c5c;
        case 0x4a6c60u: goto label_4a6c60;
        case 0x4a6c64u: goto label_4a6c64;
        case 0x4a6c68u: goto label_4a6c68;
        case 0x4a6c6cu: goto label_4a6c6c;
        case 0x4a6c70u: goto label_4a6c70;
        case 0x4a6c74u: goto label_4a6c74;
        case 0x4a6c78u: goto label_4a6c78;
        case 0x4a6c7cu: goto label_4a6c7c;
        case 0x4a6c80u: goto label_4a6c80;
        case 0x4a6c84u: goto label_4a6c84;
        case 0x4a6c88u: goto label_4a6c88;
        case 0x4a6c8cu: goto label_4a6c8c;
        case 0x4a6c90u: goto label_4a6c90;
        case 0x4a6c94u: goto label_4a6c94;
        case 0x4a6c98u: goto label_4a6c98;
        case 0x4a6c9cu: goto label_4a6c9c;
        case 0x4a6ca0u: goto label_4a6ca0;
        case 0x4a6ca4u: goto label_4a6ca4;
        case 0x4a6ca8u: goto label_4a6ca8;
        case 0x4a6cacu: goto label_4a6cac;
        case 0x4a6cb0u: goto label_4a6cb0;
        case 0x4a6cb4u: goto label_4a6cb4;
        case 0x4a6cb8u: goto label_4a6cb8;
        case 0x4a6cbcu: goto label_4a6cbc;
        case 0x4a6cc0u: goto label_4a6cc0;
        case 0x4a6cc4u: goto label_4a6cc4;
        case 0x4a6cc8u: goto label_4a6cc8;
        case 0x4a6cccu: goto label_4a6ccc;
        case 0x4a6cd0u: goto label_4a6cd0;
        case 0x4a6cd4u: goto label_4a6cd4;
        default: break;
    }

    ctx->pc = 0x4a6c18u;

label_4a6c18:
    // 0x4a6c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a6c1c:
    // 0x4a6c1c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a6c20:
    // 0x4a6c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4a6c24:
    // 0x4a6c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c28:
    // 0x4a6c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4a6c2c:
    // 0x4a6c2c: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x4a6c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_4a6c30:
    // 0x4a6c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a6c34:
    // 0x4a6c34: 0x2608002e  addiu       $t0, $s0, 0x2E
    ctx->pc = 0x4a6c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
label_4a6c38:
    // 0x4a6c38: 0xac500c40  sw          $s0, 0xC40($v0)
    ctx->pc = 0x4a6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3136), GPR_U32(ctx, 16));
label_4a6c3c:
    // 0x4a6c3c: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x4a6c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4a6c40:
    // 0x4a6c40: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4a6c44:
    // 0x4a6c44: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4a6c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4a6c48:
    // 0x4a6c48: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4a6c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a6c4c:
    // 0x4a6c4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4a6c50:
    // 0x4a6c50: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4a6c50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6c54:
    // 0x4a6c54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a6c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4a6c58:
    // 0x4a6c58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a6c5c:
    // 0x4a6c5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a6c60:
    // 0x4a6c60: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a6c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4a6c64:
    // 0x4a6c64: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4a6c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c68:
    // 0x4a6c68: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4a6c6c:
    // 0x4a6c6c: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
label_4a6c70:
    if (ctx->pc == 0x4A6C70u) {
        ctx->pc = 0x4A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C6Cu;
        // 0x4a6c70: 0x651024  and         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C74u;
        goto label_4a6c74;
    }
    ctx->pc = 0x4A6C6Cu;
    {
        const bool branch_taken_0x4a6c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C6Cu;
        // 0x4a6c70: 0x651024  and         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c6c) {
            ctx->pc = 0x4A6C8Cu;
            goto label_4a6c8c;
        }
    }
    ctx->pc = 0x4A6C74u;
label_4a6c74:
    // 0x4a6c74: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_4a6c78:
    // 0x4a6c78: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a6c78u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a6c7c:
    // 0x4a6c7c: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4a6c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
label_4a6c80:
    // 0x4a6c80: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4a6c84:
    // 0x4a6c84: 0x40f809  jalr        $v0
label_4a6c88:
    if (ctx->pc == 0x4A6C88u) {
        ctx->pc = 0x4A6C8Cu;
        goto label_4a6c8c;
    }
    ctx->pc = 0x4A6C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6C8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6C84u, 0x4A6C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6C8Cu;
label_4a6c8c:
    // 0x4a6c8c: 0x86020118  lh          $v0, 0x118($s0)
    ctx->pc = 0x4a6c8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_4a6c90:
    // 0x4a6c90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4a6c94:
    if (ctx->pc == 0x4A6C94u) {
        ctx->pc = 0x4A6C98u;
        goto label_4a6c98;
    }
    ctx->pc = 0x4A6C90u;
    {
        const bool branch_taken_0x4a6c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6c90) {
            ctx->pc = 0x4A6CA8u;
            goto label_4a6ca8;
        }
    }
    ctx->pc = 0x4A6C98u;
label_4a6c98:
    // 0x4a6c98: 0xc12992c  jal         func_4A64B0
label_4a6c9c:
    if (ctx->pc == 0x4A6C9Cu) {
        ctx->pc = 0x4A6CA0u;
        goto label_4a6ca0;
    }
    ctx->pc = 0x4A6C98u;
    SET_GPR_U32(ctx, 31, 0x4A6CA0u);
    ctx->pc = 0x4A64B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64B0u, 0x4A6C98u, 0x4A6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6CA0u;
label_4a6ca0:
    // 0x4a6ca0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a6ca4:
    if (ctx->pc == 0x4A6CA4u) {
        ctx->pc = 0x4A6CA8u;
        goto label_4a6ca8;
    }
    ctx->pc = 0x4A6CA0u;
    {
        const bool branch_taken_0x4a6ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ca0) {
            ctx->pc = 0x4A6CB0u;
            goto label_4a6cb0;
        }
    }
    ctx->pc = 0x4A6CA8u;
label_4a6ca8:
    // 0x4a6ca8: 0xc129938  jal         func_4A64E0
label_4a6cac:
    if (ctx->pc == 0x4A6CACu) {
        ctx->pc = 0x4A6CB0u;
        goto label_4a6cb0;
    }
    ctx->pc = 0x4A6CA8u;
    SET_GPR_U32(ctx, 31, 0x4A6CB0u);
    ctx->pc = 0x4A64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64E0u, 0x4A6CA8u, 0x4A6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6CB0u;
label_4a6cb0:
    // 0x4a6cb0: 0xc129944  jal         func_4A6510
label_4a6cb4:
    if (ctx->pc == 0x4A6CB4u) {
        ctx->pc = 0x4A6CB8u;
        goto label_4a6cb8;
    }
    ctx->pc = 0x4A6CB0u;
    SET_GPR_U32(ctx, 31, 0x4A6CB8u);
    ctx->pc = 0x4A6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6510u, 0x4A6CB0u, 0x4A6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6CB8u;
label_4a6cb8:
    // 0x4a6cb8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a6cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6cbc:
    // 0x4a6cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a6cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6cc0:
    // 0x4a6cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a6cc4:
    // 0x4a6cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6cc8:
    // 0x4a6cc8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4a6cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a6ccc:
    // 0x4a6ccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a6cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a6cd0:
    // 0x4a6cd0: 0x3e00008  jr          $ra
label_4a6cd4:
    if (ctx->pc == 0x4A6CD4u) {
        ctx->pc = 0x4A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CD0u;
        // 0x4a6cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CD8u;
        goto label_fallthrough_0x4a6cd0;
    }
    ctx->pc = 0x4A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CD0u;
        // 0x4a6cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a6cd0:
    ctx->pc = 0x4A6CD8u;
}
