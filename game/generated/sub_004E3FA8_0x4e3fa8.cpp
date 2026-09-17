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

// Function: sub_004E3FA8
// Address: 0x4e3fa8 - 0x4e4380
void sub_004E3FA8_0x4e3fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FA8_0x4e3fa8");
#endif

    switch (ctx->pc) {
        case 0x4e3fecu: goto label_4e3fec;
        case 0x4e4074u: goto label_4e4074;
        case 0x4e4090u: goto label_4e4090;
        case 0x4e40b4u: goto label_4e40b4;
        case 0x4e4120u: goto label_4e4120;
        case 0x4e4144u: goto label_4e4144;
        case 0x4e42d8u: goto label_4e42d8;
        case 0x4e4338u: goto label_4e4338;
        default: break;
    }

    ctx->pc = 0x4e3fa8u;

    // 0x4e3fa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e3fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e3fac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e3facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e3fb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e3fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3fb4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e3fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e3fb8: 0x267601b4  addiu       $s6, $s3, 0x1B4
    ctx->pc = 0x4e3fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x4e3fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e3fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e3fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e3fc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e3fc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e3fcc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e3fd0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e3fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e3fd8: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e3fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e3fdc: 0x4420072  bltzl       $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x4E3FDCu;
    {
        const bool branch_taken_0x4e3fdc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e3fdc) {
            ctx->pc = 0x4E3FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3FDCu;
            // 0x4e3fe0: 0x26750166  addiu       $s5, $s3, 0x166 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E41A8u;
            goto label_4e41a8;
        }
    }
    ctx->pc = 0x4E3FE4u;
    // 0x4e3fe4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E3FE4u;
    SET_GPR_U32(ctx, 31, 0x4E3FECu);
    ctx->pc = 0x4E3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3FE4u;
    // 0x4e3fe8: 0x3c12ffff  lui         $s2, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E3FE4u, 0x4E3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3FECu;
label_4e3fec:
    // 0x4e3fec: 0x26640128  addiu       $a0, $s3, 0x128
    ctx->pc = 0x4e3fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4e3ff0: 0x96620162  lhu         $v0, 0x162($s3)
    ctx->pc = 0x4e3ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 354)));
    // 0x4e3ff4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e3ff8: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x4e3ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4e3ffc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e4000: 0x26750166  addiu       $s5, $s3, 0x166
    ctx->pc = 0x4e4000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4e4004: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e4004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e4008: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e4008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e400c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e400cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4010: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4e4010u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4e4014: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e4014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e4018: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e401c: 0x26f011a0  addiu       $s0, $s7, 0x11A0
    ctx->pc = 0x4e401cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4512));
    // 0x4e4020: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e4020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e4024: 0x86620164  lh          $v0, 0x164($s3)
    ctx->pc = 0x4e4024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4e4028: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e4028u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e402c: 0x263111a4  addiu       $s1, $s1, 0x11A4
    ctx->pc = 0x4e402cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4516));
    // 0x4e4030: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4034: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4038: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e4038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e403c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e4040: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e4044: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e4044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e4048: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4e4048u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e404c: 0x84a3fa78  lh          $v1, -0x588($a1)
    ctx->pc = 0x4e404cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294965880)));
    // 0x4e4050: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4054: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e4054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e4058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e405c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e4060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e4064: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e4064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4068: 0xa663011c  sh          $v1, 0x11C($s3)
    ctx->pc = 0x4e4068u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e406c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E406Cu;
    SET_GPR_U32(ctx, 31, 0x4E4074u);
    ctx->pc = 0x4E4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E406Cu;
    // 0x4e4070: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E406Cu, 0x4E4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4074u;
label_4e4074:
    // 0x4e4074: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4e4074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e4078: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e4078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e407c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e4080: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4e4080u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e4084: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e4084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4088: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E4088u;
    SET_GPR_U32(ctx, 31, 0x4E4090u);
    ctx->pc = 0x4E408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4088u;
    // 0x4e408c: 0xa6620028  sh          $v0, 0x28($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E4088u, 0x4E4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4090u;
label_4e4090:
    // 0x4e4090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e4090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4094: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4098: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4e4098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e409c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e40a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e40a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e40a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e40a8: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4e40a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e40ac: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4E40ACu;
    SET_GPR_U32(ctx, 31, 0x4E40B4u);
    ctx->pc = 0x4E40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E40ACu;
    // 0x4e40b0: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4E40ACu, 0x4E40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E40B4u;
label_4e40b4:
    // 0x4e40b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e40b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e40bc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e40bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e40c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e40c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e40c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4e40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e40c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e40c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e40cc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4e40ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4e40d0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x4e40d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4e40d4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4e40d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e40d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e40dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e40e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e40e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e40e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e40e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e40e8: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4e40e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4e40ec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e40ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e40f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e40f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e40f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e40f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e40f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e40fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e40fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4100: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4e4104: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4108: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e410c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e4110: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e4110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4114: 0xa6620136  sh          $v0, 0x136($s3)
    ctx->pc = 0x4e4114u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4118: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4E4118u;
    SET_GPR_U32(ctx, 31, 0x4E4120u);
    ctx->pc = 0x4E411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4118u;
    // 0x4e411c: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4E4118u, 0x4E4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4120u;
label_4e4120:
    // 0x4e4120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e4120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4124: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4128: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4e4128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e412c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4130: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4134: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e4134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4138: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4e4138u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e413c: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4E413Cu;
    SET_GPR_U32(ctx, 31, 0x4E4144u);
    ctx->pc = 0x4E4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E413Cu;
    // 0x4e4140: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4E413Cu, 0x4E4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4144u;
label_4e4144:
    // 0x4e4144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e4144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4148: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e414c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e414cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4154: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e4154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e415c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e415cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4160: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4e4160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4e4164: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4168: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e416c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4170: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4174: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e4174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4178: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4e4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4e417c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e417cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4180: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4184: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e4184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4188: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4e4188u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e418c: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4e418cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4190: 0xa664013a  sh          $a0, 0x13A($s3)
    ctx->pc = 0x4e4190u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e4194: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e4194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e4198: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e4198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e419c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E419Cu;
    {
        const bool branch_taken_0x4e419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E419Cu;
        // 0x4e41a0: 0xa6c20000  sh          $v0, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e419c) {
            ctx->pc = 0x4E41B0u;
            goto label_4e41b0;
        }
    }
    ctx->pc = 0x4E41A4u;
    // 0x4e41a4: 0x0  nop
    ctx->pc = 0x4e41a4u;
    // NOP
label_4e41a8:
    // 0x4e41a8: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x4e41a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4e41ac: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4e41acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
label_4e41b0:
    // 0x4e41b0: 0x26f111a0  addiu       $s1, $s7, 0x11A0
    ctx->pc = 0x4e41b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4512));
    // 0x4e41b4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e41b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e41b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4e41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e41bc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4e41bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4e41c0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e41c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e41c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e41c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e41c8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e41c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e41cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4e41d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e41d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e41d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e41d8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4e41d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e41dc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e41e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e41e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e41e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e41e8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e41e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e41ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4e41ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e41f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e41f4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e41f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e41f8: 0x2c420700  sltiu       $v0, $v0, 0x700
    ctx->pc = 0x4e41f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1792) ? 1 : 0);
    // 0x4e41fc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E41FCu;
    {
        const bool branch_taken_0x4e41fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e41fc) {
            ctx->pc = 0x4E4200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E41FCu;
            // 0x4e4200: 0x9662015e  lhu         $v0, 0x15E($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 350)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4238u;
            goto label_4e4238;
        }
    }
    ctx->pc = 0x4E4204u;
    // 0x4e4204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e4204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4208: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e420c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e420cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4218: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e4218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e421c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e421cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4220: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4220u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e4224: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e4224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e4228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e422c: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E422Cu;
    ctx->pc = 0x4E4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E422Cu;
    // 0x4e4230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E422Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4234u;
    // 0x4e4234: 0x0  nop
    ctx->pc = 0x4e4234u;
    // NOP
label_4e4238:
    // 0x4e4238: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e4238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e423c: 0x26640128  addiu       $a0, $s3, 0x128
    ctx->pc = 0x4e423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4e4240: 0x26650118  addiu       $a1, $s3, 0x118
    ctx->pc = 0x4e4240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x4e4244: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e4244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e4248: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e4248u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e424c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e4250: 0x261011a4  addiu       $s0, $s0, 0x11A4
    ctx->pc = 0x4e4250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4516));
    // 0x4e4254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4258: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e4258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e425c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4260: 0x86620160  lh          $v0, 0x160($s3)
    ctx->pc = 0x4e4260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x4e4264: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4268: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e426c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e426cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e4270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e4274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e4274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4278: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e4278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e427c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e427cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e4280: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e4280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e4284: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e428c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e428cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e4290: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4e4290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4e4294: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e4294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4298: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e4298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e429c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e429cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e42a0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e42a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e42a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e42ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e42acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e42b0: 0x86640136  lh          $a0, 0x136($s3)
    ctx->pc = 0x4e42b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 310)));
    // 0x4e42b4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e42b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e42b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e42bc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e42bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e42c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e42c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e42c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e42c8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e42c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e42cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e42ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e42d0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E42D0u;
    SET_GPR_U32(ctx, 31, 0x4E42D8u);
    ctx->pc = 0x4E42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E42D0u;
    // 0x4e42d4: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E42D0u, 0x4E42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E42D8u;
label_4e42d8:
    // 0x4e42d8: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x4e42d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4e42dc: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4e42dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e42e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e42e4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e42e8: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4e42e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e42ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e42ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e42f0: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4e42f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e42f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e42f8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e42f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e42fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e42fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4300: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4304: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4308: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e4308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e430c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4310: 0x8664013a  lh          $a0, 0x13A($s3)
    ctx->pc = 0x4e4310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 314)));
    // 0x4e4314: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e4314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e4318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e431c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e4320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4324: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e4324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e4328: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e4328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e432c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e432cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4330: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E4330u;
    SET_GPR_U32(ctx, 31, 0x4E4338u);
    ctx->pc = 0x4E4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4330u;
    // 0x4e4334: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E4330u, 0x4E4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4338u;
label_4e4338:
    // 0x4e4338: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4e4338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e433c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e433cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4340: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e4340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e4344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e4348: 0xa663002a  sh          $v1, 0x2A($s3)
    ctx->pc = 0x4e4348u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e434c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e434cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4350: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e4350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e4354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4358: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x4e4358u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e435c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e435cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4364: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e4364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4368: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e436c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e436cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e4370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e4374: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4374u;
        // 0x4e4378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E437Cu;
    // 0x4e437c: 0x0  nop
    ctx->pc = 0x4e437cu;
    // NOP
    ctx->pc = 0x4e4380u;
}
