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

// Function: sub_00284EB0
// Address: 0x284eb0 - 0x284fc0
void sub_00284EB0_0x284eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284EB0_0x284eb0");
#endif

    switch (ctx->pc) {
        case 0x284eb0u: goto label_284eb0;
        case 0x284eb4u: goto label_284eb4;
        case 0x284eb8u: goto label_284eb8;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ec0u: goto label_284ec0;
        case 0x284ec4u: goto label_284ec4;
        case 0x284ec8u: goto label_284ec8;
        case 0x284eccu: goto label_284ecc;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ed4u: goto label_284ed4;
        case 0x284ed8u: goto label_284ed8;
        case 0x284edcu: goto label_284edc;
        case 0x284ee0u: goto label_284ee0;
        case 0x284ee4u: goto label_284ee4;
        case 0x284ee8u: goto label_284ee8;
        case 0x284eecu: goto label_284eec;
        case 0x284ef0u: goto label_284ef0;
        case 0x284ef4u: goto label_284ef4;
        case 0x284ef8u: goto label_284ef8;
        case 0x284efcu: goto label_284efc;
        case 0x284f00u: goto label_284f00;
        case 0x284f04u: goto label_284f04;
        case 0x284f08u: goto label_284f08;
        case 0x284f0cu: goto label_284f0c;
        case 0x284f10u: goto label_284f10;
        case 0x284f14u: goto label_284f14;
        case 0x284f18u: goto label_284f18;
        case 0x284f1cu: goto label_284f1c;
        case 0x284f20u: goto label_284f20;
        case 0x284f24u: goto label_284f24;
        case 0x284f28u: goto label_284f28;
        case 0x284f2cu: goto label_284f2c;
        case 0x284f30u: goto label_284f30;
        case 0x284f34u: goto label_284f34;
        case 0x284f38u: goto label_284f38;
        case 0x284f3cu: goto label_284f3c;
        case 0x284f40u: goto label_284f40;
        case 0x284f44u: goto label_284f44;
        case 0x284f48u: goto label_284f48;
        case 0x284f4cu: goto label_284f4c;
        case 0x284f50u: goto label_284f50;
        case 0x284f54u: goto label_284f54;
        case 0x284f58u: goto label_284f58;
        case 0x284f5cu: goto label_284f5c;
        case 0x284f60u: goto label_284f60;
        case 0x284f64u: goto label_284f64;
        case 0x284f68u: goto label_284f68;
        case 0x284f6cu: goto label_284f6c;
        case 0x284f70u: goto label_284f70;
        case 0x284f74u: goto label_284f74;
        case 0x284f78u: goto label_284f78;
        case 0x284f7cu: goto label_284f7c;
        case 0x284f80u: goto label_284f80;
        case 0x284f84u: goto label_284f84;
        case 0x284f88u: goto label_284f88;
        case 0x284f8cu: goto label_284f8c;
        case 0x284f90u: goto label_284f90;
        case 0x284f94u: goto label_284f94;
        case 0x284f98u: goto label_284f98;
        case 0x284f9cu: goto label_284f9c;
        case 0x284fa0u: goto label_284fa0;
        case 0x284fa4u: goto label_284fa4;
        case 0x284fa8u: goto label_284fa8;
        case 0x284facu: goto label_284fac;
        case 0x284fb0u: goto label_284fb0;
        case 0x284fb4u: goto label_284fb4;
        case 0x284fb8u: goto label_284fb8;
        case 0x284fbcu: goto label_284fbc;
        default: break;
    }

    ctx->pc = 0x284eb0u;

label_284eb0:
    // 0x284eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_284eb4:
    // 0x284eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_284eb8:
    // 0x284eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284ebc:
    // 0x284ebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x284ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_284ec0:
    // 0x284ec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x284ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_284ec4:
    // 0x284ec4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x284ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284ec8:
    // 0x284ec8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x284ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_284ecc:
    // 0x284ecc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_284ed0:
    if (ctx->pc == 0x284ED0u) {
        ctx->pc = 0x284ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284ECCu;
        // 0x284ed0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284ED4u;
        goto label_284ed4;
    }
    ctx->pc = 0x284ECCu;
    {
        const bool branch_taken_0x284ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ecc) {
            ctx->pc = 0x284ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284ECCu;
            // 0x284ed0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284EECu;
            goto label_284eec;
        }
    }
    ctx->pc = 0x284ED4u;
label_284ed4:
    // 0x284ed4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_284ed8:
    // 0x284ed8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_284edc:
    if (ctx->pc == 0x284EDCu) {
        ctx->pc = 0x284EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284ED8u;
        // 0x284edc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284EE0u;
        goto label_284ee0;
    }
    ctx->pc = 0x284ED8u;
    {
        const bool branch_taken_0x284ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x284EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284ED8u;
        // 0x284edc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ed8) {
            ctx->pc = 0x284EE8u;
            goto label_284ee8;
        }
    }
    ctx->pc = 0x284EE0u;
label_284ee0:
    // 0x284ee0: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_284ee4:
    if (ctx->pc == 0x284EE4u) {
        ctx->pc = 0x284EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EE0u;
        // 0x284ee4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284EE8u;
        goto label_284ee8;
    }
    ctx->pc = 0x284EE0u;
    {
        const bool branch_taken_0x284ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284ee0) {
            ctx->pc = 0x284EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284EE0u;
            // 0x284ee4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284EE8u;
label_284ee8:
    // 0x284ee8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x284ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_284eec:
    // 0x284eec: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_284ef0:
    if (ctx->pc == 0x284EF0u) {
        ctx->pc = 0x284EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EECu;
        // 0x284ef0: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284EF4u;
        goto label_284ef4;
    }
    ctx->pc = 0x284EECu;
    {
        const bool branch_taken_0x284eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284eec) {
            ctx->pc = 0x284EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284EECu;
            // 0x284ef0: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284F10u;
            goto label_284f10;
        }
    }
    ctx->pc = 0x284EF4u;
label_284ef4:
    // 0x284ef4: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x284ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_284ef8:
    // 0x284ef8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x284ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_284efc:
    // 0x284efc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_284f00:
    // 0x284f00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x284f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_284f04:
    // 0x284f04: 0x60f809  jalr        $v1
label_284f08:
    if (ctx->pc == 0x284F08u) {
        ctx->pc = 0x284F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F04u;
        // 0x284f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F0Cu;
        goto label_284f0c;
    }
    ctx->pc = 0x284F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x284F0Cu);
        ctx->pc = 0x284F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F04u;
        // 0x284f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F04u, 0x284F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284F0Cu;
label_284f0c:
    // 0x284f0c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x284f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_284f10:
    // 0x284f10: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_284f14:
    if (ctx->pc == 0x284F14u) {
        ctx->pc = 0x284F18u;
        goto label_284f18;
    }
    ctx->pc = 0x284F10u;
    {
        const bool branch_taken_0x284f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284f10) {
            ctx->pc = 0x284F30u;
            goto label_284f30;
        }
    }
    ctx->pc = 0x284F18u;
label_284f18:
    // 0x284f18: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x284f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_284f1c:
    // 0x284f1c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_284f20:
    // 0x284f20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x284f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_284f24:
    // 0x284f24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x284f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_284f28:
    // 0x284f28: 0x60f809  jalr        $v1
label_284f2c:
    if (ctx->pc == 0x284F2Cu) {
        ctx->pc = 0x284F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F28u;
        // 0x284f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F30u;
        goto label_284f30;
    }
    ctx->pc = 0x284F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x284F30u);
        ctx->pc = 0x284F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F28u;
        // 0x284f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F28u, 0x284F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284F30u;
label_284f30:
    // 0x284f30: 0xc0d503c  jal         func_3540F0
label_284f34:
    if (ctx->pc == 0x284F34u) {
        ctx->pc = 0x284F38u;
        goto label_284f38;
    }
    ctx->pc = 0x284F30u;
    SET_GPR_U32(ctx, 31, 0x284F38u);
    ctx->pc = 0x3540F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3540F0u, 0x284F30u, 0x284F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F38u;
label_284f38:
    // 0x284f38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x284f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_284f3c:
    // 0x284f3c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x284f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_284f40:
    // 0x284f40: 0x24a537e0  addiu       $a1, $a1, 0x37E0
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14304));
label_284f44:
    // 0x284f44: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x284f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_284f48:
    // 0x284f48: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x284f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_284f4c:
    // 0x284f4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x284f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_284f50:
    // 0x284f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_284f54:
    // 0x284f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284f58:
    // 0x284f58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x284f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_284f5c:
    // 0x284f5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x284f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_284f60:
    // 0x284f60: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x284f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
label_284f64:
    // 0x284f64: 0x3e00008  jr          $ra
label_284f68:
    if (ctx->pc == 0x284F68u) {
        ctx->pc = 0x284F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F64u;
        // 0x284f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F6Cu;
        goto label_284f6c;
    }
    ctx->pc = 0x284F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F64u;
        // 0x284f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F6Cu;
label_284f6c:
    // 0x284f6c: 0x0  nop
    ctx->pc = 0x284f6cu;
    // NOP
label_284f70:
    // 0x284f70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x284f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_284f74:
    // 0x284f74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x284f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284f78:
    // 0x284f78: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_284f7c:
    if (ctx->pc == 0x284F7Cu) {
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F78u;
        // 0x284f7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F80u;
        goto label_284f80;
    }
    ctx->pc = 0x284F78u;
    {
        const bool branch_taken_0x284f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F78u;
        // 0x284f7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f78) {
            ctx->pc = 0x284F90u;
            goto label_284f90;
        }
    }
    ctx->pc = 0x284F80u;
label_284f80:
    // 0x284f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284f84:
    // 0x284f84: 0x3e00008  jr          $ra
label_284f88:
    if (ctx->pc == 0x284F88u) {
        ctx->pc = 0x284F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F84u;
        // 0x284f88: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F8Cu;
        goto label_284f8c;
    }
    ctx->pc = 0x284F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F84u;
        // 0x284f88: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F8Cu;
label_284f8c:
    // 0x284f8c: 0x0  nop
    ctx->pc = 0x284f8cu;
    // NOP
label_284f90:
    // 0x284f90: 0x3e00008  jr          $ra
label_284f94:
    if (ctx->pc == 0x284F94u) {
        ctx->pc = 0x284F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F90u;
        // 0x284f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F98u;
        goto label_284f98;
    }
    ctx->pc = 0x284F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F90u;
        // 0x284f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F98u;
label_284f98:
    // 0x284f98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_284f9c:
    // 0x284f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284fa0:
    // 0x284fa0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_284fa4:
    if (ctx->pc == 0x284FA4u) {
        ctx->pc = 0x284FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FA0u;
        // 0x284fa4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FA8u;
        goto label_284fa8;
    }
    ctx->pc = 0x284FA0u;
    {
        const bool branch_taken_0x284fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x284FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FA0u;
        // 0x284fa4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fa0) {
            ctx->pc = 0x284FB8u;
            goto label_284fb8;
        }
    }
    ctx->pc = 0x284FA8u;
label_284fa8:
    // 0x284fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284fac:
    // 0x284fac: 0x3e00008  jr          $ra
label_284fb0:
    if (ctx->pc == 0x284FB0u) {
        ctx->pc = 0x284FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FACu;
        // 0x284fb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FB4u;
        goto label_284fb4;
    }
    ctx->pc = 0x284FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FACu;
        // 0x284fb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284FB4u;
label_284fb4:
    // 0x284fb4: 0x0  nop
    ctx->pc = 0x284fb4u;
    // NOP
label_284fb8:
    // 0x284fb8: 0x3e00008  jr          $ra
label_284fbc:
    if (ctx->pc == 0x284FBCu) {
        ctx->pc = 0x284FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FB8u;
        // 0x284fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FC0u;
        goto label_fallthrough_0x284fb8;
    }
    ctx->pc = 0x284FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FB8u;
        // 0x284fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x284fb8:
    ctx->pc = 0x284FC0u;
}
