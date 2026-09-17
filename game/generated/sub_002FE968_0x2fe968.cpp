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

// Function: sub_002FE968
// Address: 0x2fe968 - 0x2fea78
void sub_002FE968_0x2fe968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE968_0x2fe968");
#endif

    switch (ctx->pc) {
        case 0x2fe968u: goto label_2fe968;
        case 0x2fe96cu: goto label_2fe96c;
        case 0x2fe970u: goto label_2fe970;
        case 0x2fe974u: goto label_2fe974;
        case 0x2fe978u: goto label_2fe978;
        case 0x2fe97cu: goto label_2fe97c;
        case 0x2fe980u: goto label_2fe980;
        case 0x2fe984u: goto label_2fe984;
        case 0x2fe988u: goto label_2fe988;
        case 0x2fe98cu: goto label_2fe98c;
        case 0x2fe990u: goto label_2fe990;
        case 0x2fe994u: goto label_2fe994;
        case 0x2fe998u: goto label_2fe998;
        case 0x2fe99cu: goto label_2fe99c;
        case 0x2fe9a0u: goto label_2fe9a0;
        case 0x2fe9a4u: goto label_2fe9a4;
        case 0x2fe9a8u: goto label_2fe9a8;
        case 0x2fe9acu: goto label_2fe9ac;
        case 0x2fe9b0u: goto label_2fe9b0;
        case 0x2fe9b4u: goto label_2fe9b4;
        case 0x2fe9b8u: goto label_2fe9b8;
        case 0x2fe9bcu: goto label_2fe9bc;
        case 0x2fe9c0u: goto label_2fe9c0;
        case 0x2fe9c4u: goto label_2fe9c4;
        case 0x2fe9c8u: goto label_2fe9c8;
        case 0x2fe9ccu: goto label_2fe9cc;
        case 0x2fe9d0u: goto label_2fe9d0;
        case 0x2fe9d4u: goto label_2fe9d4;
        case 0x2fe9d8u: goto label_2fe9d8;
        case 0x2fe9dcu: goto label_2fe9dc;
        case 0x2fe9e0u: goto label_2fe9e0;
        case 0x2fe9e4u: goto label_2fe9e4;
        case 0x2fe9e8u: goto label_2fe9e8;
        case 0x2fe9ecu: goto label_2fe9ec;
        case 0x2fe9f0u: goto label_2fe9f0;
        case 0x2fe9f4u: goto label_2fe9f4;
        case 0x2fe9f8u: goto label_2fe9f8;
        case 0x2fe9fcu: goto label_2fe9fc;
        case 0x2fea00u: goto label_2fea00;
        case 0x2fea04u: goto label_2fea04;
        case 0x2fea08u: goto label_2fea08;
        case 0x2fea0cu: goto label_2fea0c;
        case 0x2fea10u: goto label_2fea10;
        case 0x2fea14u: goto label_2fea14;
        case 0x2fea18u: goto label_2fea18;
        case 0x2fea1cu: goto label_2fea1c;
        case 0x2fea20u: goto label_2fea20;
        case 0x2fea24u: goto label_2fea24;
        case 0x2fea28u: goto label_2fea28;
        case 0x2fea2cu: goto label_2fea2c;
        case 0x2fea30u: goto label_2fea30;
        case 0x2fea34u: goto label_2fea34;
        case 0x2fea38u: goto label_2fea38;
        case 0x2fea3cu: goto label_2fea3c;
        case 0x2fea40u: goto label_2fea40;
        case 0x2fea44u: goto label_2fea44;
        case 0x2fea48u: goto label_2fea48;
        case 0x2fea4cu: goto label_2fea4c;
        case 0x2fea50u: goto label_2fea50;
        case 0x2fea54u: goto label_2fea54;
        case 0x2fea58u: goto label_2fea58;
        case 0x2fea5cu: goto label_2fea5c;
        case 0x2fea60u: goto label_2fea60;
        case 0x2fea64u: goto label_2fea64;
        case 0x2fea68u: goto label_2fea68;
        case 0x2fea6cu: goto label_2fea6c;
        case 0x2fea70u: goto label_2fea70;
        case 0x2fea74u: goto label_2fea74;
        default: break;
    }

    ctx->pc = 0x2fe968u;

label_2fe968:
    // 0x2fe968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe96c:
    // 0x2fe96c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fe96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2fe970:
    // 0x2fe970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe974:
    // 0x2fe974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fe974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2fe978:
    // 0x2fe978: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fe978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe97c:
    // 0x2fe97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fe980:
    // 0x2fe980: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fe980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2fe984:
    // 0x2fe984: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fe984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2fe988:
    // 0x2fe988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fe988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2fe98c:
    // 0x2fe98c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2fe98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2fe990:
    // 0x2fe990: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2fe994:
    // 0x2fe994: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe998:
    // 0x2fe998: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fe998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fe99c:
    // 0x2fe99c: 0x60f809  jalr        $v1
label_2fe9a0:
    if (ctx->pc == 0x2FE9A0u) {
        ctx->pc = 0x2FE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE99Cu;
        // 0x2fe9a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE9A4u;
        goto label_2fe9a4;
    }
    ctx->pc = 0x2FE99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FE9A4u);
        ctx->pc = 0x2FE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE99Cu;
        // 0x2fe9a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE99Cu, 0x2FE9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FE9A4u;
label_2fe9a4:
    // 0x2fe9a4: 0xc0cb7d4  jal         func_32DF50
label_2fe9a8:
    if (ctx->pc == 0x2FE9A8u) {
        ctx->pc = 0x2FE9ACu;
        goto label_2fe9ac;
    }
    ctx->pc = 0x2FE9A4u;
    SET_GPR_U32(ctx, 31, 0x2FE9ACu);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FE9A4u, 0x2FE9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9ACu;
label_2fe9ac:
    // 0x2fe9ac: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2fe9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fe9b0:
    // 0x2fe9b0: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_2fe9b4:
    if (ctx->pc == 0x2FE9B4u) {
        ctx->pc = 0x2FE9B8u;
        goto label_2fe9b8;
    }
    ctx->pc = 0x2FE9B0u;
    {
        const bool branch_taken_0x2fe9b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe9b0) {
            ctx->pc = 0x2FEA50u;
            goto label_2fea50;
        }
    }
    ctx->pc = 0x2FE9B8u;
label_2fe9b8:
    // 0x2fe9b8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2fe9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2fe9bc:
    // 0x2fe9bc: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2fe9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
label_2fe9c0:
    // 0x2fe9c0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2fe9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2fe9c4:
    // 0x2fe9c4: 0x0  nop
    ctx->pc = 0x2fe9c4u;
    // NOP
label_2fe9c8:
    // 0x2fe9c8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2fe9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2fe9cc:
    // 0x2fe9cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fe9d0:
    if (ctx->pc == 0x2FE9D0u) {
        ctx->pc = 0x2FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9CCu;
        // 0x2fe9d0: 0x8e62fb00  lw          $v0, -0x500($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966016)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE9D4u;
        goto label_2fe9d4;
    }
    ctx->pc = 0x2FE9CCu;
    {
        const bool branch_taken_0x2fe9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9CCu;
        // 0x2fe9d0: 0x8e62fb00  lw          $v0, -0x500($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9cc) {
            ctx->pc = 0x2FEA00u;
            goto label_2fea00;
        }
    }
    ctx->pc = 0x2FE9D4u;
label_2fe9d4:
    // 0x2fe9d4: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x2fe9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe9d8:
    // 0x2fe9d8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2fe9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2fe9dc:
    // 0x2fe9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fe9e0:
    // 0x2fe9e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2fe9e4:
    // 0x2fe9e4: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2fe9e4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe9e8:
    // 0x2fe9e8: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2fe9e8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2fe9ec:
    // 0x2fe9ec: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2fe9ecu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2fe9f0:
    // 0x2fe9f0: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2fe9f0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2fe9f4:
    // 0x2fe9f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fe9f8:
    if (ctx->pc == 0x2FE9F8u) {
        ctx->pc = 0x2FE9FCu;
        goto label_2fe9fc;
    }
    ctx->pc = 0x2FE9F4u;
    {
        const bool branch_taken_0x2fe9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe9f4) {
            ctx->pc = 0x2FEA1Cu;
            goto label_2fea1c;
        }
    }
    ctx->pc = 0x2FE9FCu;
label_2fe9fc:
    // 0x2fe9fc: 0x0  nop
    ctx->pc = 0x2fe9fcu;
    // NOP
label_2fea00:
    // 0x2fea00: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2fea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2fea04:
    // 0x2fea04: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x2fea04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fea08:
    // 0x2fea08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2fea0c:
    // 0x2fea0c: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2fea0cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fea10:
    // 0x2fea10: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2fea10u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2fea14:
    // 0x2fea14: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2fea14u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2fea18:
    // 0x2fea18: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2fea18u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2fea1c:
    // 0x2fea1c: 0xc0cb84a  jal         func_32E128
label_2fea20:
    if (ctx->pc == 0x2FEA20u) {
        ctx->pc = 0x2FEA24u;
        goto label_2fea24;
    }
    ctx->pc = 0x2FEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA24u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x2FEA1Cu, 0x2FEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA24u;
label_2fea24:
    // 0x2fea24: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2fea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2fea28:
    // 0x2fea28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2fea2c:
    // 0x2fea2c: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2fea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_2fea30:
    // 0x2fea30: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2fea30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_2fea34:
    // 0x2fea34: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2fea34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_2fea38:
    // 0x2fea38: 0xf85f0030  sqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2fea38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_2fea3c:
    // 0x2fea3c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2fea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fea40:
    // 0x2fea40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fea40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fea44:
    // 0x2fea44: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2fea44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fea48:
    // 0x2fea48: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
label_2fea4c:
    if (ctx->pc == 0x2FEA4Cu) {
        ctx->pc = 0x2FEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA48u;
        // 0x2fea4c: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEA50u;
        goto label_2fea50;
    }
    ctx->pc = 0x2FEA48u;
    {
        const bool branch_taken_0x2fea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fea48) {
            ctx->pc = 0x2FEA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEA48u;
            // 0x2fea4c: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe9c8;
        }
    }
    ctx->pc = 0x2FEA50u;
label_2fea50:
    // 0x2fea50: 0xc0cb7e0  jal         func_32DF80
label_2fea54:
    if (ctx->pc == 0x2FEA54u) {
        ctx->pc = 0x2FEA58u;
        goto label_2fea58;
    }
    ctx->pc = 0x2FEA50u;
    SET_GPR_U32(ctx, 31, 0x2FEA58u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FEA50u, 0x2FEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA58u;
label_2fea58:
    // 0x2fea58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fea58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fea5c:
    // 0x2fea5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fea5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fea60:
    // 0x2fea60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fea60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fea64:
    // 0x2fea64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fea64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2fea68:
    // 0x2fea68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fea68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fea6c:
    // 0x2fea6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fea6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2fea70:
    // 0x2fea70: 0x3e00008  jr          $ra
label_2fea74:
    if (ctx->pc == 0x2FEA74u) {
        ctx->pc = 0x2FEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA70u;
        // 0x2fea74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEA78u;
        goto label_fallthrough_0x2fea70;
    }
    ctx->pc = 0x2FEA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA70u;
        // 0x2fea74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fea70:
    ctx->pc = 0x2FEA78u;
}
