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

// Function: sub_00326BB8
// Address: 0x326bb8 - 0x326cf0
void sub_00326BB8_0x326bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326BB8_0x326bb8");
#endif

    switch (ctx->pc) {
        case 0x326bb8u: goto label_326bb8;
        case 0x326bbcu: goto label_326bbc;
        case 0x326bc0u: goto label_326bc0;
        case 0x326bc4u: goto label_326bc4;
        case 0x326bc8u: goto label_326bc8;
        case 0x326bccu: goto label_326bcc;
        case 0x326bd0u: goto label_326bd0;
        case 0x326bd4u: goto label_326bd4;
        case 0x326bd8u: goto label_326bd8;
        case 0x326bdcu: goto label_326bdc;
        case 0x326be0u: goto label_326be0;
        case 0x326be4u: goto label_326be4;
        case 0x326be8u: goto label_326be8;
        case 0x326becu: goto label_326bec;
        case 0x326bf0u: goto label_326bf0;
        case 0x326bf4u: goto label_326bf4;
        case 0x326bf8u: goto label_326bf8;
        case 0x326bfcu: goto label_326bfc;
        case 0x326c00u: goto label_326c00;
        case 0x326c04u: goto label_326c04;
        case 0x326c08u: goto label_326c08;
        case 0x326c0cu: goto label_326c0c;
        case 0x326c10u: goto label_326c10;
        case 0x326c14u: goto label_326c14;
        case 0x326c18u: goto label_326c18;
        case 0x326c1cu: goto label_326c1c;
        case 0x326c20u: goto label_326c20;
        case 0x326c24u: goto label_326c24;
        case 0x326c28u: goto label_326c28;
        case 0x326c2cu: goto label_326c2c;
        case 0x326c30u: goto label_326c30;
        case 0x326c34u: goto label_326c34;
        case 0x326c38u: goto label_326c38;
        case 0x326c3cu: goto label_326c3c;
        case 0x326c40u: goto label_326c40;
        case 0x326c44u: goto label_326c44;
        case 0x326c48u: goto label_326c48;
        case 0x326c4cu: goto label_326c4c;
        case 0x326c50u: goto label_326c50;
        case 0x326c54u: goto label_326c54;
        case 0x326c58u: goto label_326c58;
        case 0x326c5cu: goto label_326c5c;
        case 0x326c60u: goto label_326c60;
        case 0x326c64u: goto label_326c64;
        case 0x326c68u: goto label_326c68;
        case 0x326c6cu: goto label_326c6c;
        case 0x326c70u: goto label_326c70;
        case 0x326c74u: goto label_326c74;
        case 0x326c78u: goto label_326c78;
        case 0x326c7cu: goto label_326c7c;
        case 0x326c80u: goto label_326c80;
        case 0x326c84u: goto label_326c84;
        case 0x326c88u: goto label_326c88;
        case 0x326c8cu: goto label_326c8c;
        case 0x326c90u: goto label_326c90;
        case 0x326c94u: goto label_326c94;
        case 0x326c98u: goto label_326c98;
        case 0x326c9cu: goto label_326c9c;
        case 0x326ca0u: goto label_326ca0;
        case 0x326ca4u: goto label_326ca4;
        case 0x326ca8u: goto label_326ca8;
        case 0x326cacu: goto label_326cac;
        case 0x326cb0u: goto label_326cb0;
        case 0x326cb4u: goto label_326cb4;
        case 0x326cb8u: goto label_326cb8;
        case 0x326cbcu: goto label_326cbc;
        case 0x326cc0u: goto label_326cc0;
        case 0x326cc4u: goto label_326cc4;
        case 0x326cc8u: goto label_326cc8;
        case 0x326cccu: goto label_326ccc;
        case 0x326cd0u: goto label_326cd0;
        case 0x326cd4u: goto label_326cd4;
        case 0x326cd8u: goto label_326cd8;
        case 0x326cdcu: goto label_326cdc;
        case 0x326ce0u: goto label_326ce0;
        case 0x326ce4u: goto label_326ce4;
        case 0x326ce8u: goto label_326ce8;
        case 0x326cecu: goto label_326cec;
        default: break;
    }

    ctx->pc = 0x326bb8u;

label_326bb8:
    // 0x326bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_326bbc:
    // 0x326bbc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x326bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_326bc0:
    // 0x326bc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x326bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_326bc4:
    // 0x326bc4: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x326bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
label_326bc8:
    // 0x326bc8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x326bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_326bcc:
    // 0x326bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326bd0:
    // 0x326bd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x326bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_326bd4:
    // 0x326bd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x326bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326bd8:
    // 0x326bd8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x326bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_326bdc:
    // 0x326bdc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x326bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_326be0:
    // 0x326be0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x326be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_326be4:
    // 0x326be4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x326be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_326be8:
    // 0x326be8: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x326be8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
label_326bec:
    // 0x326bec: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x326becu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_326bf0:
    // 0x326bf0: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x326bf0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_326bf4:
    // 0x326bf4: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x326bf4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
label_326bf8:
    // 0x326bf8: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x326bf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_326bfc:
    // 0x326bfc: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x326bfcu;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_326c00:
    // 0x326c00: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x326c00u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_326c04:
    // 0x326c04: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x326c04u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
label_326c08:
    // 0x326c08: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x326c08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_326c0c:
    // 0x326c0c: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x326c0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_326c10:
    // 0x326c10: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x326c10u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_326c14:
    // 0x326c14: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x326c14u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
label_326c18:
    // 0x326c18: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x326c18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_326c1c:
    // 0x326c1c: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x326c1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_326c20:
    // 0x326c20: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x326c20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_326c24:
    // 0x326c24: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x326c24u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_326c28:
    // 0x326c28: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x326c28u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_326c2c:
    // 0x326c2c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x326c2cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_326c30:
    // 0x326c30: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_326c34:
    if (ctx->pc == 0x326C34u) {
        ctx->pc = 0x326C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C30u;
        // 0x326c34: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C38u;
        goto label_326c38;
    }
    ctx->pc = 0x326C30u;
    {
        const bool branch_taken_0x326c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x326c30) {
            ctx->pc = 0x326C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326C30u;
            // 0x326c34: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326C64u;
            goto label_326c64;
        }
    }
    ctx->pc = 0x326C38u;
label_326c38:
    // 0x326c38: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x326c38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_326c3c:
    // 0x326c3c: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x326c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_326c40:
    // 0x326c40: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x326c40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_326c44:
    // 0x326c44: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x326c44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_326c48:
    // 0x326c48: 0xc0c88a2  jal         func_322288
label_326c4c:
    if (ctx->pc == 0x326C4Cu) {
        ctx->pc = 0x326C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C48u;
        // 0x326c4c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C50u;
        goto label_326c50;
    }
    ctx->pc = 0x326C48u;
    SET_GPR_U32(ctx, 31, 0x326C50u);
    ctx->pc = 0x326C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C48u;
    // 0x326c4c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x326C48u, 0x326C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C50u;
label_326c50:
    // 0x326c50: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_326c54:
    // 0x326c54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x326c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_326c58:
    // 0x326c58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x326c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_326c5c:
    // 0x326c5c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x326c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_326c60:
    // 0x326c60: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x326c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_326c64:
    // 0x326c64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326c68:
    // 0x326c68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326c6c:
    // 0x326c6c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x326c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_326c70:
    // 0x326c70: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_326c74:
    // 0x326c74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326c78:
    // 0x326c78: 0x40f809  jalr        $v0
label_326c7c:
    if (ctx->pc == 0x326C7Cu) {
        ctx->pc = 0x326C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C78u;
        // 0x326c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C80u;
        goto label_326c80;
    }
    ctx->pc = 0x326C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326C80u);
        ctx->pc = 0x326C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C78u;
        // 0x326c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C78u, 0x326C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326C80u;
label_326c80:
    // 0x326c80: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x326c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_326c84:
    // 0x326c84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x326c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326c88:
    // 0x326c88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326c8c:
    // 0x326c8c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x326c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_326c90:
    // 0x326c90: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_326c94:
    // 0x326c94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x326c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326c98:
    // 0x326c98: 0x40f809  jalr        $v0
label_326c9c:
    if (ctx->pc == 0x326C9Cu) {
        ctx->pc = 0x326C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C98u;
        // 0x326c9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CA0u;
        goto label_326ca0;
    }
    ctx->pc = 0x326C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326CA0u);
        ctx->pc = 0x326C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C98u;
        // 0x326c9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C98u, 0x326CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326CA0u;
label_326ca0:
    // 0x326ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ca4:
    // 0x326ca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326ca8:
    // 0x326ca8: 0xc0c9b3c  jal         func_326CF0
label_326cac:
    if (ctx->pc == 0x326CACu) {
        ctx->pc = 0x326CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CA8u;
        // 0x326cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CB0u;
        goto label_326cb0;
    }
    ctx->pc = 0x326CA8u;
    SET_GPR_U32(ctx, 31, 0x326CB0u);
    ctx->pc = 0x326CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326CA8u;
    // 0x326cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CF0u, 0x326CA8u, 0x326CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326CB0u;
label_326cb0:
    // 0x326cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326cb4:
    // 0x326cb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x326cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326cb8:
    // 0x326cb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326cbc:
    // 0x326cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x326cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326cc0:
    // 0x326cc0: 0xc0d0ba8  jal         func_342EA0
label_326cc4:
    if (ctx->pc == 0x326CC4u) {
        ctx->pc = 0x326CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CC0u;
        // 0x326cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CC8u;
        goto label_326cc8;
    }
    ctx->pc = 0x326CC0u;
    SET_GPR_U32(ctx, 31, 0x326CC8u);
    ctx->pc = 0x326CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326CC0u;
    // 0x326cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EA0u, 0x326CC0u, 0x326CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326CC8u;
label_326cc8:
    // 0x326cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ccc:
    // 0x326ccc: 0xc0d0b98  jal         func_342E60
label_326cd0:
    if (ctx->pc == 0x326CD0u) {
        ctx->pc = 0x326CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CCCu;
        // 0x326cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CD4u;
        goto label_326cd4;
    }
    ctx->pc = 0x326CCCu;
    SET_GPR_U32(ctx, 31, 0x326CD4u);
    ctx->pc = 0x326CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326CCCu;
    // 0x326cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E60u, 0x326CCCu, 0x326CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326CD4u;
label_326cd4:
    // 0x326cd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x326cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326cd8:
    // 0x326cd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x326cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_326cdc:
    // 0x326cdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x326cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326ce0:
    // 0x326ce0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x326ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_326ce4:
    // 0x326ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x326ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_326ce8:
    // 0x326ce8: 0x3e00008  jr          $ra
label_326cec:
    if (ctx->pc == 0x326CECu) {
        ctx->pc = 0x326CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CE8u;
        // 0x326cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CF0u;
        goto label_fallthrough_0x326ce8;
    }
    ctx->pc = 0x326CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CE8u;
        // 0x326cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x326ce8:
    ctx->pc = 0x326CF0u;
}
