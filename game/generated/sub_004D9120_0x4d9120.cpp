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

// Function: sub_004D9120
// Address: 0x4d9120 - 0x4d91f8
void sub_004D9120_0x4d9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9120_0x4d9120");
#endif

    switch (ctx->pc) {
        case 0x4d914cu: goto label_4d914c;
        default: break;
    }

    ctx->pc = 0x4d9120u;

    // 0x4d9120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d9124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d9128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d9128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d912c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d9130: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d9130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4d9134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d9134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d9138: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d9138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d913c: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D913Cu;
    {
        const bool branch_taken_0x4d913c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d913c) {
            ctx->pc = 0x4D9140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D913Cu;
            // 0x4d9140: 0x8e090140  lw          $t1, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9178u;
            goto label_4d9178;
        }
    }
    ctx->pc = 0x4D9144u;
    // 0x4d9144: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D9144u;
    SET_GPR_U32(ctx, 31, 0x4D914Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D9144u, 0x4D914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D914Cu;
label_4d914c:
    // 0x4d914c: 0x24020486  addiu       $v0, $zero, 0x486
    ctx->pc = 0x4d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1158));
    // 0x4d9150: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d9150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d9154: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4d9154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9158: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4d9158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d915c: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d915cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d9160: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d9160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d9164: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d9164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d9168: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d9168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d916c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d9170: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d9170u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9174: 0x8e090140  lw          $t1, 0x140($s0)
    ctx->pc = 0x4d9174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4d9178:
    // 0x4d9178: 0x852201b4  lh          $v0, 0x1B4($t1)
    ctx->pc = 0x4d9178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 436)));
    // 0x4d917c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D917Cu;
    {
        const bool branch_taken_0x4d917c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D917Cu;
        // 0x4d9180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d917c) {
            ctx->pc = 0x4D9198u;
            goto label_4d9198;
        }
    }
    ctx->pc = 0x4D9184u;
    // 0x4d9184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d9188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d918c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9190: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4D9190u;
    ctx->pc = 0x4D9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9190u;
    // 0x4d9194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9198u;
label_4d9198:
    // 0x4d9198: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4d9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4d919c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4d919cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d91a0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d91a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d91a4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d91a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d91a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d91a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d91ac: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4d91acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4d91b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d91b4: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4d91b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d91b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d91bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d91bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d91c0: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x4d91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4d91c4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4d91c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d91c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d91c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d91cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d91ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d91d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d91d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d91d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d91d8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4d91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4d91dc: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x4d91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4d91e0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4d91e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d91e4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d91e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d91e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d91ec: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4d91f0: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4D91F0u;
    ctx->pc = 0x4D91F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D91F0u;
    // 0x4d91f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4D91F8u;
}
