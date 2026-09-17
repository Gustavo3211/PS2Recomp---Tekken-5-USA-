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

// Function: sub_0032AC90
// Address: 0x32ac90 - 0x32ae50
void sub_0032AC90_0x32ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AC90_0x32ac90");
#endif

    switch (ctx->pc) {
        case 0x32ac90u: goto label_32ac90;
        case 0x32ac94u: goto label_32ac94;
        case 0x32ac98u: goto label_32ac98;
        case 0x32ac9cu: goto label_32ac9c;
        case 0x32aca0u: goto label_32aca0;
        case 0x32aca4u: goto label_32aca4;
        case 0x32aca8u: goto label_32aca8;
        case 0x32acacu: goto label_32acac;
        case 0x32acb0u: goto label_32acb0;
        case 0x32acb4u: goto label_32acb4;
        case 0x32acb8u: goto label_32acb8;
        case 0x32acbcu: goto label_32acbc;
        case 0x32acc0u: goto label_32acc0;
        case 0x32acc4u: goto label_32acc4;
        case 0x32acc8u: goto label_32acc8;
        case 0x32acccu: goto label_32accc;
        case 0x32acd0u: goto label_32acd0;
        case 0x32acd4u: goto label_32acd4;
        case 0x32acd8u: goto label_32acd8;
        case 0x32acdcu: goto label_32acdc;
        case 0x32ace0u: goto label_32ace0;
        case 0x32ace4u: goto label_32ace4;
        case 0x32ace8u: goto label_32ace8;
        case 0x32acecu: goto label_32acec;
        case 0x32acf0u: goto label_32acf0;
        case 0x32acf4u: goto label_32acf4;
        case 0x32acf8u: goto label_32acf8;
        case 0x32acfcu: goto label_32acfc;
        case 0x32ad00u: goto label_32ad00;
        case 0x32ad04u: goto label_32ad04;
        case 0x32ad08u: goto label_32ad08;
        case 0x32ad0cu: goto label_32ad0c;
        case 0x32ad10u: goto label_32ad10;
        case 0x32ad14u: goto label_32ad14;
        case 0x32ad18u: goto label_32ad18;
        case 0x32ad1cu: goto label_32ad1c;
        case 0x32ad20u: goto label_32ad20;
        case 0x32ad24u: goto label_32ad24;
        case 0x32ad28u: goto label_32ad28;
        case 0x32ad2cu: goto label_32ad2c;
        case 0x32ad30u: goto label_32ad30;
        case 0x32ad34u: goto label_32ad34;
        case 0x32ad38u: goto label_32ad38;
        case 0x32ad3cu: goto label_32ad3c;
        case 0x32ad40u: goto label_32ad40;
        case 0x32ad44u: goto label_32ad44;
        case 0x32ad48u: goto label_32ad48;
        case 0x32ad4cu: goto label_32ad4c;
        case 0x32ad50u: goto label_32ad50;
        case 0x32ad54u: goto label_32ad54;
        case 0x32ad58u: goto label_32ad58;
        case 0x32ad5cu: goto label_32ad5c;
        case 0x32ad60u: goto label_32ad60;
        case 0x32ad64u: goto label_32ad64;
        case 0x32ad68u: goto label_32ad68;
        case 0x32ad6cu: goto label_32ad6c;
        case 0x32ad70u: goto label_32ad70;
        case 0x32ad74u: goto label_32ad74;
        case 0x32ad78u: goto label_32ad78;
        case 0x32ad7cu: goto label_32ad7c;
        case 0x32ad80u: goto label_32ad80;
        case 0x32ad84u: goto label_32ad84;
        case 0x32ad88u: goto label_32ad88;
        case 0x32ad8cu: goto label_32ad8c;
        case 0x32ad90u: goto label_32ad90;
        case 0x32ad94u: goto label_32ad94;
        case 0x32ad98u: goto label_32ad98;
        case 0x32ad9cu: goto label_32ad9c;
        case 0x32ada0u: goto label_32ada0;
        case 0x32ada4u: goto label_32ada4;
        case 0x32ada8u: goto label_32ada8;
        case 0x32adacu: goto label_32adac;
        case 0x32adb0u: goto label_32adb0;
        case 0x32adb4u: goto label_32adb4;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adbcu: goto label_32adbc;
        case 0x32adc0u: goto label_32adc0;
        case 0x32adc4u: goto label_32adc4;
        case 0x32adc8u: goto label_32adc8;
        case 0x32adccu: goto label_32adcc;
        case 0x32add0u: goto label_32add0;
        case 0x32add4u: goto label_32add4;
        case 0x32add8u: goto label_32add8;
        case 0x32addcu: goto label_32addc;
        case 0x32ade0u: goto label_32ade0;
        case 0x32ade4u: goto label_32ade4;
        case 0x32ade8u: goto label_32ade8;
        case 0x32adecu: goto label_32adec;
        case 0x32adf0u: goto label_32adf0;
        case 0x32adf4u: goto label_32adf4;
        case 0x32adf8u: goto label_32adf8;
        case 0x32adfcu: goto label_32adfc;
        case 0x32ae00u: goto label_32ae00;
        case 0x32ae04u: goto label_32ae04;
        case 0x32ae08u: goto label_32ae08;
        case 0x32ae0cu: goto label_32ae0c;
        case 0x32ae10u: goto label_32ae10;
        case 0x32ae14u: goto label_32ae14;
        case 0x32ae18u: goto label_32ae18;
        case 0x32ae1cu: goto label_32ae1c;
        case 0x32ae20u: goto label_32ae20;
        case 0x32ae24u: goto label_32ae24;
        case 0x32ae28u: goto label_32ae28;
        case 0x32ae2cu: goto label_32ae2c;
        case 0x32ae30u: goto label_32ae30;
        case 0x32ae34u: goto label_32ae34;
        case 0x32ae38u: goto label_32ae38;
        case 0x32ae3cu: goto label_32ae3c;
        case 0x32ae40u: goto label_32ae40;
        case 0x32ae44u: goto label_32ae44;
        case 0x32ae48u: goto label_32ae48;
        case 0x32ae4cu: goto label_32ae4c;
        default: break;
    }

    ctx->pc = 0x32ac90u;

label_32ac90:
    // 0x32ac90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32ac94:
    // 0x32ac94: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x32ac94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_32ac98:
    // 0x32ac98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32ac9c:
    // 0x32ac9c: 0x24f00d00  addiu       $s0, $a3, 0xD00
    ctx->pc = 0x32ac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 3328));
label_32aca0:
    // 0x32aca0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32aca4:
    // 0x32aca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32aca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32aca8:
    // 0x32aca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32acac:
    // 0x32acac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32acacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32acb0:
    // 0x32acb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32acb4:
    // 0x32acb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32acb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32acb8:
    // 0x32acb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32acbc:
    // 0x32acbc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x32acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_32acc0:
    // 0x32acc0: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x32acc0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
label_32acc4:
    // 0x32acc4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x32acc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_32acc8:
    // 0x32acc8: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x32acc8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32accc:
    // 0x32accc: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x32acccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
label_32acd0:
    // 0x32acd0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x32acd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_32acd4:
    // 0x32acd4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x32acd4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32acd8:
    // 0x32acd8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x32acd8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32acdc:
    // 0x32acdc: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x32acdcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
label_32ace0:
    // 0x32ace0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x32ace0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_32ace4:
    // 0x32ace4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x32ace4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32ace8:
    // 0x32ace8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x32ace8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32acec:
    // 0x32acec: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x32acecu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
label_32acf0:
    // 0x32acf0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x32acf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_32acf4:
    // 0x32acf4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x32acf4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32acf8:
    // 0x32acf8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x32acf8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32acfc:
    // 0x32acfc: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x32acfcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_32ad00:
    // 0x32ad00: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x32ad00u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_32ad04:
    // 0x32ad04: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x32ad04u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_32ad08:
    // 0x32ad08: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_32ad0c:
    if (ctx->pc == 0x32AD0Cu) {
        ctx->pc = 0x32AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD08u;
        // 0x32ad0c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD10u;
        goto label_32ad10;
    }
    ctx->pc = 0x32AD08u;
    {
        const bool branch_taken_0x32ad08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad08) {
            ctx->pc = 0x32AD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AD08u;
            // 0x32ad0c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD3Cu;
            goto label_32ad3c;
        }
    }
    ctx->pc = 0x32AD10u;
label_32ad10:
    // 0x32ad10: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x32ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_32ad14:
    // 0x32ad14: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x32ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_32ad18:
    // 0x32ad18: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x32ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_32ad1c:
    // 0x32ad1c: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x32ad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_32ad20:
    // 0x32ad20: 0xc0c88a2  jal         func_322288
label_32ad24:
    if (ctx->pc == 0x32AD24u) {
        ctx->pc = 0x32AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD20u;
        // 0x32ad24: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD28u;
        goto label_32ad28;
    }
    ctx->pc = 0x32AD20u;
    SET_GPR_U32(ctx, 31, 0x32AD28u);
    ctx->pc = 0x32AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD20u;
    // 0x32ad24: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x32AD20u, 0x32AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD28u;
label_32ad28:
    // 0x32ad28: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x32ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_32ad2c:
    // 0x32ad2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_32ad30:
    // 0x32ad30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x32ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_32ad34:
    // 0x32ad34: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32ad38:
    // 0x32ad38: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x32ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_32ad3c:
    // 0x32ad3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ad40:
    // 0x32ad40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32ad40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32ad44:
    // 0x32ad44: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x32ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_32ad48:
    // 0x32ad48: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32ad48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ad4c:
    // 0x32ad4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ad50:
    // 0x32ad50: 0x40f809  jalr        $v0
label_32ad54:
    if (ctx->pc == 0x32AD54u) {
        ctx->pc = 0x32AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD50u;
        // 0x32ad54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD58u;
        goto label_32ad58;
    }
    ctx->pc = 0x32AD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AD58u);
        ctx->pc = 0x32AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD50u;
        // 0x32ad54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AD50u, 0x32AD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AD58u;
label_32ad58:
    // 0x32ad58: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x32ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_32ad5c:
    // 0x32ad5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32ad5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad60:
    // 0x32ad60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x32ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_32ad64:
    // 0x32ad64: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ad68:
    // 0x32ad68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ad6c:
    // 0x32ad6c: 0x40f809  jalr        $v0
label_32ad70:
    if (ctx->pc == 0x32AD70u) {
        ctx->pc = 0x32AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD6Cu;
        // 0x32ad70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD74u;
        goto label_32ad74;
    }
    ctx->pc = 0x32AD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AD74u);
        ctx->pc = 0x32AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD6Cu;
        // 0x32ad70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AD6Cu, 0x32AD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AD74u;
label_32ad74:
    // 0x32ad74: 0x260500d8  addiu       $a1, $s0, 0xD8
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_32ad78:
    // 0x32ad78: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x32ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_32ad7c:
    // 0x32ad7c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x32ad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32ad80:
    // 0x32ad80: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x32ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
label_32ad84:
    // 0x32ad84: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32ad88:
    // 0x32ad88: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x32ad88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_32ad8c:
    // 0x32ad8c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x32ad8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_32ad90:
    // 0x32ad90: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x32ad90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_32ad94:
    // 0x32ad94: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x32ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
label_32ad98:
    // 0x32ad98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32ad9c:
    // 0x32ad9c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x32ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_32ada0:
    // 0x32ada0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x32ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_32ada4:
    // 0x32ada4: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x32ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_32ada8:
    // 0x32ada8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x32ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_32adac:
    // 0x32adac: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x32adacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_32adb0:
    // 0x32adb0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x32adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_32adb4:
    // 0x32adb4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x32adb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_32adb8:
    // 0x32adb8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x32adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_32adbc:
    // 0x32adbc: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x32adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
label_32adc0:
    // 0x32adc0: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x32adc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_32adc4:
    // 0x32adc4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x32adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_32adc8:
    // 0x32adc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32adcc:
    // 0x32adcc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32adccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_32add0:
    // 0x32add0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32add0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32add4:
    // 0x32add4: 0x70684389  pcpyld      $t0, $v1, $t0
    ctx->pc = 0x32add4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
label_32add8:
    // 0x32add8: 0x7e280000  sq          $t0, 0x0($s1)
    ctx->pc = 0x32add8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 8));
label_32addc:
    // 0x32addc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32ade0:
    // 0x32ade0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ade4:
    // 0x32ade4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_32ade8:
    // 0x32ade8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32adec:
    // 0x32adec: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_32adf0:
    // 0x32adf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32adf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32adf4:
    // 0x32adf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x32adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_32adf8:
    // 0x32adf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x32adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_32adfc:
    // 0x32adfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32ae00:
    if (ctx->pc == 0x32AE00u) {
        ctx->pc = 0x32AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADFCu;
        // 0x32ae00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE04u;
        goto label_32ae04;
    }
    ctx->pc = 0x32ADFCu;
    {
        const bool branch_taken_0x32adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADFCu;
        // 0x32ae00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adfc) {
            ctx->pc = 0x32AE10u;
            goto label_32ae10;
        }
    }
    ctx->pc = 0x32AE04u;
label_32ae04:
    // 0x32ae04: 0x40f809  jalr        $v0
label_32ae08:
    if (ctx->pc == 0x32AE08u) {
        ctx->pc = 0x32AE0Cu;
        goto label_32ae0c;
    }
    ctx->pc = 0x32AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AE0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE04u, 0x32AE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AE0Cu;
label_32ae0c:
    // 0x32ae0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32ae0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ae10:
    // 0x32ae10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32ae10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32ae14:
    // 0x32ae14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32ae14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32ae18:
    // 0x32ae18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ae1c:
    // 0x32ae1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32ae1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32ae20:
    // 0x32ae20: 0xc0d0ba8  jal         func_342EA0
label_32ae24:
    if (ctx->pc == 0x32AE24u) {
        ctx->pc = 0x32AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE20u;
        // 0x32ae24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE28u;
        goto label_32ae28;
    }
    ctx->pc = 0x32AE20u;
    SET_GPR_U32(ctx, 31, 0x32AE28u);
    ctx->pc = 0x32AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE20u;
    // 0x32ae24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EA0u, 0x32AE20u, 0x32AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE28u;
label_32ae28:
    // 0x32ae28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ae2c:
    // 0x32ae2c: 0xc0d0b98  jal         func_342E60
label_32ae30:
    if (ctx->pc == 0x32AE30u) {
        ctx->pc = 0x32AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE2Cu;
        // 0x32ae30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE34u;
        goto label_32ae34;
    }
    ctx->pc = 0x32AE2Cu;
    SET_GPR_U32(ctx, 31, 0x32AE34u);
    ctx->pc = 0x32AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE2Cu;
    // 0x32ae30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E60u, 0x32AE2Cu, 0x32AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE34u;
label_32ae34:
    // 0x32ae34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32ae34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32ae38:
    // 0x32ae38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32ae38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32ae3c:
    // 0x32ae3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32ae3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ae40:
    // 0x32ae40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32ae40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32ae44:
    // 0x32ae44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32ae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32ae48:
    // 0x32ae48: 0x3e00008  jr          $ra
label_32ae4c:
    if (ctx->pc == 0x32AE4Cu) {
        ctx->pc = 0x32AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE48u;
        // 0x32ae4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE50u;
        goto label_fallthrough_0x32ae48;
    }
    ctx->pc = 0x32AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE48u;
        // 0x32ae4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ae48:
    ctx->pc = 0x32AE50u;
}
