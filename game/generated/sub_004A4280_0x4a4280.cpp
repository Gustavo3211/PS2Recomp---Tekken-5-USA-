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

// Function: sub_004A4280
// Address: 0x4a4280 - 0x4a4390
void sub_004A4280_0x4a4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4280_0x4a4280");
#endif

    switch (ctx->pc) {
        case 0x4a430cu: goto label_4a430c;
        case 0x4a4328u: goto label_4a4328;
        case 0x4a433cu: goto label_4a433c;
        case 0x4a4358u: goto label_4a4358;
        default: break;
    }

    ctx->pc = 0x4a4280u;

    // 0x4a4280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4284: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a4288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a428c: 0x24510c08  addiu       $s1, $v0, 0xC08
    ctx->pc = 0x4a428cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x4a4290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a4294: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a4294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a429c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a429cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a42a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a42a4: 0x26450118  addiu       $a1, $s2, 0x118
    ctx->pc = 0x4a42a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x4a42a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a42ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a42acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a42b0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a42b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a42b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a42b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a42b8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a42b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a42bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a42bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a42c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a42c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a42c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a42c8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a42c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a42cc: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4a42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4a42d0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a42d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a42d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a42d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a42dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a42dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a42e0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4a42e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4a42e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a42e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a42e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A42E8u;
    {
        const bool branch_taken_0x4a42e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A42E8u;
        // 0x4a42ec: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a42e8) {
            ctx->pc = 0x4A42F8u;
            goto label_4a42f8;
        }
    }
    ctx->pc = 0x4A42F0u;
    // 0x4a42f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a42f4: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4a42f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a42f8:
    // 0x4a42f8: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4a42f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a42fc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a42fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a4300: 0x26100c0c  addiu       $s0, $s0, 0xC0C
    ctx->pc = 0x4a4300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3084));
    // 0x4a4304: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A4304u;
    SET_GPR_U32(ctx, 31, 0x4A430Cu);
    ctx->pc = 0x4A4308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4304u;
    // 0x4a4308: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A4304u, 0x4A430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A430Cu;
label_4a430c:
    // 0x4a430c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4310: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x4a4310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x4a4314: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4318: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a4318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4320: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A4320u;
    SET_GPR_U32(ctx, 31, 0x4A4328u);
    ctx->pc = 0x4A4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4320u;
    // 0x4a4324: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A4320u, 0x4A4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4328u;
label_4a4328:
    // 0x4a4328: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a4328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4330: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x4a4330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x4a4334: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A4334u;
    SET_GPR_U32(ctx, 31, 0x4A433Cu);
    ctx->pc = 0x4A4338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4334u;
    // 0x4a4338: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A4334u, 0x4A433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A433Cu;
label_4a433c:
    // 0x4a433c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a4340: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a4340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4344: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4a4344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a4348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a4348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a434c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a434cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a4350: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A4350u;
    SET_GPR_U32(ctx, 31, 0x4A4358u);
    ctx->pc = 0x4A4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4350u;
    // 0x4a4354: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A4350u, 0x4A4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4358u;
label_4a4358:
    // 0x4a4358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a4358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a435c: 0x531824  and         $v1, $v0, $s3
    ctx->pc = 0x4a435cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a4360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a4360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a4364: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a4364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a4368: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a4368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a436c: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x4a436cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a4370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4374: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a4374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a4378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a437c: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x4a437cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a4380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a4384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4388: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A4388u;
    ctx->pc = 0x4A438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4388u;
    // 0x4a438c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A4390u;
}
