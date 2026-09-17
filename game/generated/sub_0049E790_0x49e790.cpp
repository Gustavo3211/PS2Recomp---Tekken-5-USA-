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

// Function: sub_0049E790
// Address: 0x49e790 - 0x49e940
void sub_0049E790_0x49e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E790_0x49e790");
#endif

    switch (ctx->pc) {
        case 0x49e7a8u: goto label_49e7a8;
        case 0x49e7d4u: goto label_49e7d4;
        case 0x49e8c0u: goto label_49e8c0;
        case 0x49e8d8u: goto label_49e8d8;
        case 0x49e910u: goto label_49e910;
        case 0x49e920u: goto label_49e920;
        case 0x49e930u: goto label_49e930;
        default: break;
    }

    ctx->pc = 0x49e790u;

label_49e790:
    // 0x49e790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49e794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49e79c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49e7a0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49E7A0u;
    SET_GPR_U32(ctx, 31, 0x49E7A8u);
    ctx->pc = 0x49E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E7A0u;
    // 0x49e7a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49E7A0u, 0x49E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E7A8u;
label_49e7a8:
    // 0x49e7a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49e7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e7ac: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49e7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e7b4: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x49e7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49e7b8: 0x96032424  lhu         $v1, 0x2424($s0)
    ctx->pc = 0x49e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72FAA4u));
    // 0x49e7bc: 0x96022426  lhu         $v0, 0x2426($s0)
    ctx->pc = 0x49e7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FAA6u));
    // 0x49e7c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49e7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49e7c4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x49E7C4u;
    {
        const bool branch_taken_0x49e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e7c4) {
            ctx->pc = 0x49E7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E7C4u;
            // 0x49e7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E8B0u;
            goto label_49e8b0;
        }
    }
    ctx->pc = 0x49E7CCu;
    // 0x49e7cc: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x49E7CCu;
    SET_GPR_U32(ctx, 31, 0x49E7D4u);
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x49E7CCu, 0x49E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E7D4u;
label_49e7d4:
    // 0x49e7d4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49e7d8: 0x86032330  lh          $v1, 0x2330($s0)
    ctx->pc = 0x49e7d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9008)));
    // 0x49e7dc: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x49e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49e7e0: 0x244a0014  addiu       $t2, $v0, 0x14
    ctx->pc = 0x49e7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x49e7e4: 0x244b0018  addiu       $t3, $v0, 0x18
    ctx->pc = 0x49e7e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x49e7e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49e7ec: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x49e7ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49e7f0: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x49e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x49e7f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x49e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x49e7f8: 0x94848100  lhu         $a0, -0x7F00($a0)
    ctx->pc = 0x49e7f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294934784)));
    // 0x49e7fc: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x49e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e800: 0x86092334  lh          $t1, 0x2334($s0)
    ctx->pc = 0x49e800u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9012)));
    // 0x49e804: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49e804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e808: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x49e808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x49e80c: 0x86082336  lh          $t0, 0x2336($s0)
    ctx->pc = 0x49e80cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9014)));
    // 0x49e810: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e814: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49e814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49e818: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e81c: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x49e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x49e820: 0x86072338  lh          $a3, 0x2338($s0)
    ctx->pc = 0x49e820u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9016)));
    // 0x49e824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e828: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x49e828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x49e82c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x49e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x49e830: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x49e830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49e834: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49e834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49e838: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49e838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49e83c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e840: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x49e840u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x49e844: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x49e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49e848: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x49e848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x49e84c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49e850: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49e850u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49e854: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x49e854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x49e858: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x49e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x49e85c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x49e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x49e860: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x49e860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x49e864: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x49e864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x49e868: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x49e868u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x49e86c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x49e86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x49e870: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49e870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49e874: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49e874u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49e878: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x49e878u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x49e87c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x49e87cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x49e880: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x49e880u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x49e884: 0xa4490130  sh          $t1, 0x130($v0)
    ctx->pc = 0x49e884u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 304), (uint16_t)GPR_U32(ctx, 9));
    // 0x49e888: 0xa4480132  sh          $t0, 0x132($v0)
    ctx->pc = 0x49e888u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 306), (uint16_t)GPR_U32(ctx, 8));
    // 0x49e88c: 0xa4470134  sh          $a3, 0x134($v0)
    ctx->pc = 0x49e88cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 308), (uint16_t)GPR_U32(ctx, 7));
    // 0x49e890: 0x9603233a  lhu         $v1, 0x233A($s0)
    ctx->pc = 0x49e890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9018)));
    // 0x49e894: 0xa4430118  sh          $v1, 0x118($v0)
    ctx->pc = 0x49e894u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e898: 0x9604233c  lhu         $a0, 0x233C($s0)
    ctx->pc = 0x49e898u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9020)));
    // 0x49e89c: 0xa444011c  sh          $a0, 0x11C($v0)
    ctx->pc = 0x49e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e8a0: 0x9603233e  lhu         $v1, 0x233E($s0)
    ctx->pc = 0x49e8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9022)));
    // 0x49e8a4: 0xa44c01be  sh          $t4, 0x1BE($v0)
    ctx->pc = 0x49e8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 12));
    // 0x49e8a8: 0xa4430120  sh          $v1, 0x120($v0)
    ctx->pc = 0x49e8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49e8b0:
    // 0x49e8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49e8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49e8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49e8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x49E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8B8u;
        // 0x49e8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E8C0u;
label_49e8c0:
    // 0x49e8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49e8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49e8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e8cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49e8d0: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x49E8D0u;
    SET_GPR_U32(ctx, 31, 0x49E8D8u);
    ctx->pc = 0x49E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E8D0u;
    // 0x49e8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x49E8D0u, 0x49E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E8D8u;
label_49e8d8:
    // 0x49e8d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x49E8D8u;
    {
        const bool branch_taken_0x49e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8D8u;
        // 0x49e8dc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8d8) {
            ctx->pc = 0x49E930u;
            goto label_49e930;
        }
    }
    ctx->pc = 0x49E8E0u;
    // 0x49e8e0: 0x8442f9b0  lh          $v0, -0x650($v0)
    ctx->pc = 0x49e8e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965680)));
    // 0x49e8e4: 0x2c43000e  sltiu       $v1, $v0, 0xE
    ctx->pc = 0x49e8e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x49e8e8: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x49E8E8u;
    {
        const bool branch_taken_0x49e8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e8e8) {
            ctx->pc = 0x49E8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E8E8u;
            // 0x49e8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E934u;
            goto label_49e934;
        }
    }
    ctx->pc = 0x49E8F0u;
    // 0x49e8f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49e8f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49e8f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49e8fc: 0x8c63b150  lw          $v1, -0x4EB0($v1)
    ctx->pc = 0x49e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947152)));
    // 0x49e900: 0x600008  jr          $v1
    ctx->pc = 0x49E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49E908u: goto label_49e908;
            case 0x49E918u: goto label_49e918;
            case 0x49E928u: goto label_49e928;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49E908u;
label_49e908:
    // 0x49e908: 0xc1279e4  jal         func_49E790
    ctx->pc = 0x49E908u;
    SET_GPR_U32(ctx, 31, 0x49E910u);
    ctx->pc = 0x49E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E908u;
    // 0x49e90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E790u;
    goto label_49e790;
    ctx->pc = 0x49E910u;
label_49e910:
    // 0x49e910: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49E910u;
    {
        const bool branch_taken_0x49e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E910u;
        // 0x49e914: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e910) {
            ctx->pc = 0x49E934u;
            goto label_49e934;
        }
    }
    ctx->pc = 0x49E918u;
label_49e918:
    // 0x49e918: 0xc1279b2  jal         func_49E6C8
    ctx->pc = 0x49E918u;
    SET_GPR_U32(ctx, 31, 0x49E920u);
    ctx->pc = 0x49E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E918u;
    // 0x49e91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E6C8u, 0x49E918u, 0x49E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E920u;
label_49e920:
    // 0x49e920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49E920u;
    {
        const bool branch_taken_0x49e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E920u;
        // 0x49e924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e920) {
            ctx->pc = 0x49E934u;
            goto label_49e934;
        }
    }
    ctx->pc = 0x49E928u;
label_49e928:
    // 0x49e928: 0xc1279b2  jal         func_49E6C8
    ctx->pc = 0x49E928u;
    SET_GPR_U32(ctx, 31, 0x49E930u);
    ctx->pc = 0x49E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E928u;
    // 0x49e92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E6C8u, 0x49E928u, 0x49E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E930u;
label_49e930:
    // 0x49e930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49e934:
    // 0x49e934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49e938: 0x3e00008  jr          $ra
    ctx->pc = 0x49E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E938u;
        // 0x49e93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E940u;
}
