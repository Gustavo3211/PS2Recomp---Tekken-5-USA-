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

// Function: sub_002E3E18
// Address: 0x2e3e18 - 0x2e3f28
void sub_002E3E18_0x2e3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3E18_0x2e3e18");
#endif

    switch (ctx->pc) {
        case 0x2e3e18u: goto label_2e3e18;
        case 0x2e3e1cu: goto label_2e3e1c;
        case 0x2e3e20u: goto label_2e3e20;
        case 0x2e3e24u: goto label_2e3e24;
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e2cu: goto label_2e3e2c;
        case 0x2e3e30u: goto label_2e3e30;
        case 0x2e3e34u: goto label_2e3e34;
        case 0x2e3e38u: goto label_2e3e38;
        case 0x2e3e3cu: goto label_2e3e3c;
        case 0x2e3e40u: goto label_2e3e40;
        case 0x2e3e44u: goto label_2e3e44;
        case 0x2e3e48u: goto label_2e3e48;
        case 0x2e3e4cu: goto label_2e3e4c;
        case 0x2e3e50u: goto label_2e3e50;
        case 0x2e3e54u: goto label_2e3e54;
        case 0x2e3e58u: goto label_2e3e58;
        case 0x2e3e5cu: goto label_2e3e5c;
        case 0x2e3e60u: goto label_2e3e60;
        case 0x2e3e64u: goto label_2e3e64;
        case 0x2e3e68u: goto label_2e3e68;
        case 0x2e3e6cu: goto label_2e3e6c;
        case 0x2e3e70u: goto label_2e3e70;
        case 0x2e3e74u: goto label_2e3e74;
        case 0x2e3e78u: goto label_2e3e78;
        case 0x2e3e7cu: goto label_2e3e7c;
        case 0x2e3e80u: goto label_2e3e80;
        case 0x2e3e84u: goto label_2e3e84;
        case 0x2e3e88u: goto label_2e3e88;
        case 0x2e3e8cu: goto label_2e3e8c;
        case 0x2e3e90u: goto label_2e3e90;
        case 0x2e3e94u: goto label_2e3e94;
        case 0x2e3e98u: goto label_2e3e98;
        case 0x2e3e9cu: goto label_2e3e9c;
        case 0x2e3ea0u: goto label_2e3ea0;
        case 0x2e3ea4u: goto label_2e3ea4;
        case 0x2e3ea8u: goto label_2e3ea8;
        case 0x2e3eacu: goto label_2e3eac;
        case 0x2e3eb0u: goto label_2e3eb0;
        case 0x2e3eb4u: goto label_2e3eb4;
        case 0x2e3eb8u: goto label_2e3eb8;
        case 0x2e3ebcu: goto label_2e3ebc;
        case 0x2e3ec0u: goto label_2e3ec0;
        case 0x2e3ec4u: goto label_2e3ec4;
        case 0x2e3ec8u: goto label_2e3ec8;
        case 0x2e3eccu: goto label_2e3ecc;
        case 0x2e3ed0u: goto label_2e3ed0;
        case 0x2e3ed4u: goto label_2e3ed4;
        case 0x2e3ed8u: goto label_2e3ed8;
        case 0x2e3edcu: goto label_2e3edc;
        case 0x2e3ee0u: goto label_2e3ee0;
        case 0x2e3ee4u: goto label_2e3ee4;
        case 0x2e3ee8u: goto label_2e3ee8;
        case 0x2e3eecu: goto label_2e3eec;
        case 0x2e3ef0u: goto label_2e3ef0;
        case 0x2e3ef4u: goto label_2e3ef4;
        case 0x2e3ef8u: goto label_2e3ef8;
        case 0x2e3efcu: goto label_2e3efc;
        case 0x2e3f00u: goto label_2e3f00;
        case 0x2e3f04u: goto label_2e3f04;
        case 0x2e3f08u: goto label_2e3f08;
        case 0x2e3f0cu: goto label_2e3f0c;
        case 0x2e3f10u: goto label_2e3f10;
        case 0x2e3f14u: goto label_2e3f14;
        case 0x2e3f18u: goto label_2e3f18;
        case 0x2e3f1cu: goto label_2e3f1c;
        case 0x2e3f20u: goto label_2e3f20;
        case 0x2e3f24u: goto label_2e3f24;
        default: break;
    }

    ctx->pc = 0x2e3e18u;

label_2e3e18:
    // 0x2e3e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e3e1c:
    // 0x2e3e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e3e20:
    // 0x2e3e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3e24:
    // 0x2e3e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e3e28:
    // 0x2e3e28: 0x26110074  addiu       $s1, $s0, 0x74
    ctx->pc = 0x2e3e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_2e3e2c:
    // 0x2e3e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e3e30:
    // 0x2e3e30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2e3e34:
    // 0x2e3e34: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2e3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2e3e38:
    // 0x2e3e38: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_2e3e3c:
    if (ctx->pc == 0x2E3E3Cu) {
        ctx->pc = 0x2E3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E38u;
        // 0x2e3e3c: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E40u;
        goto label_2e3e40;
    }
    ctx->pc = 0x2E3E38u;
    {
        const bool branch_taken_0x2e3e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E38u;
        // 0x2e3e3c: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e38) {
            ctx->pc = 0x2E3F08u;
            goto label_2e3f08;
        }
    }
    ctx->pc = 0x2E3E40u;
label_2e3e40:
    // 0x2e3e40: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2e3e44:
    // 0x2e3e44: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_2e3e48:
    if (ctx->pc == 0x2E3E48u) {
        ctx->pc = 0x2E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E44u;
        // 0x2e3e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E4Cu;
        goto label_2e3e4c;
    }
    ctx->pc = 0x2E3E44u;
    {
        const bool branch_taken_0x2e3e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e44) {
            ctx->pc = 0x2E3E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3E44u;
            // 0x2e3e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3F0Cu;
            goto label_2e3f0c;
        }
    }
    ctx->pc = 0x2E3E4Cu;
label_2e3e4c:
    // 0x2e3e4c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2e3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2e3e50:
    // 0x2e3e50: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_2e3e54:
    if (ctx->pc == 0x2E3E54u) {
        ctx->pc = 0x2E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E50u;
        // 0x2e3e54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E58u;
        goto label_2e3e58;
    }
    ctx->pc = 0x2E3E50u;
    {
        const bool branch_taken_0x2e3e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e50) {
            ctx->pc = 0x2E3E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3E50u;
            // 0x2e3e54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3F0Cu;
            goto label_2e3f0c;
        }
    }
    ctx->pc = 0x2E3E58u;
label_2e3e58:
    // 0x2e3e58: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2e3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2e3e5c:
    // 0x2e3e5c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_2e3e60:
    if (ctx->pc == 0x2E3E60u) {
        ctx->pc = 0x2E3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E5Cu;
        // 0x2e3e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E64u;
        goto label_2e3e64;
    }
    ctx->pc = 0x2E3E5Cu;
    {
        const bool branch_taken_0x2e3e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e5c) {
            ctx->pc = 0x2E3E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3E5Cu;
            // 0x2e3e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3F0Cu;
            goto label_2e3f0c;
        }
    }
    ctx->pc = 0x2E3E64u;
label_2e3e64:
    // 0x2e3e64: 0xc089832  jal         func_2260C8
label_2e3e68:
    if (ctx->pc == 0x2E3E68u) {
        ctx->pc = 0x2E3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E64u;
        // 0x2e3e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E6Cu;
        goto label_2e3e6c;
    }
    ctx->pc = 0x2E3E64u;
    SET_GPR_U32(ctx, 31, 0x2E3E6Cu);
    ctx->pc = 0x2E3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E64u;
    // 0x2e3e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260C8u, 0x2E3E64u, 0x2E3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E6Cu;
label_2e3e6c:
    // 0x2e3e6c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_2e3e70:
    if (ctx->pc == 0x2E3E70u) {
        ctx->pc = 0x2E3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E6Cu;
        // 0x2e3e70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E74u;
        goto label_2e3e74;
    }
    ctx->pc = 0x2E3E6Cu;
    {
        const bool branch_taken_0x2e3e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e6c) {
            ctx->pc = 0x2E3E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3E6Cu;
            // 0x2e3e70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3F0Cu;
            goto label_2e3f0c;
        }
    }
    ctx->pc = 0x2E3E74u;
label_2e3e74:
    // 0x2e3e74: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3e78:
    // 0x2e3e78: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e3e7c:
    // 0x2e3e7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3e80:
    // 0x2e3e80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3e84:
    // 0x2e3e84: 0x60f809  jalr        $v1
label_2e3e88:
    if (ctx->pc == 0x2E3E88u) {
        ctx->pc = 0x2E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E84u;
        // 0x2e3e88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E8Cu;
        goto label_2e3e8c;
    }
    ctx->pc = 0x2E3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3E8Cu);
        ctx->pc = 0x2E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E84u;
        // 0x2e3e88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E84u, 0x2E3E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3E8Cu;
label_2e3e8c:
    // 0x2e3e8c: 0x260200b4  addiu       $v0, $s0, 0xB4
    ctx->pc = 0x2e3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_2e3e90:
    // 0x2e3e90: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2e3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2e3e94:
    // 0x2e3e94: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x2e3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2e3e98:
    // 0x2e3e98: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2e3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3e9c:
    // 0x2e3e9c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2e3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2e3ea0:
    // 0x2e3ea0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2e3ea4:
    // 0x2e3ea4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2e3ea8:
    // 0x2e3ea8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2e3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2e3eac:
    // 0x2e3eac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e3eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e3eb0:
    // 0x2e3eb0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2e3eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e3eb4:
    // 0x2e3eb4: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2e3eb8:
    // 0x2e3eb8: 0xe0f809  jalr        $a3
label_2e3ebc:
    if (ctx->pc == 0x2E3EBCu) {
        ctx->pc = 0x2E3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EB8u;
        // 0x2e3ebc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3EC0u;
        goto label_2e3ec0;
    }
    ctx->pc = 0x2E3EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2E3EC0u);
        ctx->pc = 0x2E3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EB8u;
        // 0x2e3ebc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3EB8u, 0x2E3EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3EC0u;
label_2e3ec0:
    // 0x2e3ec0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3ec4:
    // 0x2e3ec4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x2e3ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2e3ec8:
    // 0x2e3ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3ecc:
    // 0x2e3ecc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2e3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2e3ed0:
    // 0x2e3ed0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3ed4:
    // 0x2e3ed4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3ed8:
    // 0x2e3ed8: 0x60f809  jalr        $v1
label_2e3edc:
    if (ctx->pc == 0x2E3EDCu) {
        ctx->pc = 0x2E3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3ED8u;
        // 0x2e3edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3EE0u;
        goto label_2e3ee0;
    }
    ctx->pc = 0x2E3ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3EE0u);
        ctx->pc = 0x2E3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3ED8u;
        // 0x2e3edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3ED8u, 0x2E3EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3EE0u;
label_2e3ee0:
    // 0x2e3ee0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3ee4:
    // 0x2e3ee4: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x2e3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2e3ee8:
    // 0x2e3ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3eec:
    // 0x2e3eec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e3ef0:
    // 0x2e3ef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3ef4:
    // 0x2e3ef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3ef8:
    // 0x2e3ef8: 0x60f809  jalr        $v1
label_2e3efc:
    if (ctx->pc == 0x2E3EFCu) {
        ctx->pc = 0x2E3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EF8u;
        // 0x2e3efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F00u;
        goto label_2e3f00;
    }
    ctx->pc = 0x2E3EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3F00u);
        ctx->pc = 0x2E3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EF8u;
        // 0x2e3efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3EF8u, 0x2E3F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3F00u;
label_2e3f00:
    // 0x2e3f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3f04:
    // 0x2e3f04: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2e3f08:
    // 0x2e3f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3f0c:
    // 0x2e3f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f10:
    // 0x2e3f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e3f14:
    // 0x2e3f14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e3f18:
    // 0x2e3f18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e3f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3f1c:
    // 0x2e3f1c: 0x3e00008  jr          $ra
label_2e3f20:
    if (ctx->pc == 0x2E3F20u) {
        ctx->pc = 0x2E3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F1Cu;
        // 0x2e3f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F24u;
        goto label_2e3f24;
    }
    ctx->pc = 0x2E3F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F1Cu;
        // 0x2e3f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F24u;
label_2e3f24:
    // 0x2e3f24: 0x0  nop
    ctx->pc = 0x2e3f24u;
    // NOP
    ctx->pc = 0x2e3f28u;
}
