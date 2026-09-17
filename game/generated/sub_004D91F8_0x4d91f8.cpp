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

// Function: sub_004D91F8
// Address: 0x4d91f8 - 0x4d9480
void sub_004D91F8_0x4d91f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D91F8_0x4d91f8");
#endif

    switch (ctx->pc) {
        case 0x4d9224u: goto label_4d9224;
        case 0x4d9334u: goto label_4d9334;
        case 0x4d9348u: goto label_4d9348;
        case 0x4d93b0u: goto label_4d93b0;
        case 0x4d93b8u: goto label_4d93b8;
        case 0x4d93c0u: goto label_4d93c0;
        case 0x4d9450u: goto label_4d9450;
        default: break;
    }

    ctx->pc = 0x4d91f8u;

    // 0x4d91f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d91f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d91fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d91fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d9200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d9200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d9204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d9208: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d9208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4d920c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d9210: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d9210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d9214: 0x442002b  bltzl       $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4D9214u;
    {
        const bool branch_taken_0x4d9214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d9214) {
            ctx->pc = 0x4D9218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9214u;
            // 0x4d9218: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D92C4u;
            goto label_4d92c4;
        }
    }
    ctx->pc = 0x4D921Cu;
    // 0x4d921c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D921Cu;
    SET_GPR_U32(ctx, 31, 0x4D9224u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D921Cu, 0x4D9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9224u;
label_4d9224:
    // 0x4d9224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4d9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d9228: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4d9228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d922c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4d9230: 0x248410f4  addiu       $a0, $a0, 0x10F4
    ctx->pc = 0x4d9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4340));
    // 0x4d9234: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x4d9234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4d9238: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d9238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10F4u));
    // 0x4d923c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d923cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4d9240: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d9240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4d9244: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d9244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d9248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d924c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d924cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d9250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d9250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d9254: 0x24c610f0  addiu       $a2, $a2, 0x10F0
    ctx->pc = 0x4d9254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4336));
    // 0x4d9258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4d9258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4d925c: 0x24a510f8  addiu       $a1, $a1, 0x10F8
    ctx->pc = 0x4d925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4344));
    // 0x4d9260: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x4d9260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4d9264: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4d9268: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4d9268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d926c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d9270: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4d9274: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d9278: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d9278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d927c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d9280: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d9284: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d9288: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4d9288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4d928c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4d928cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4d9290: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d9290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d9294: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d9294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d9298: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d9298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d929c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d92a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d92a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d92a4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d92a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4d92a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d92a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d92ac: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d92acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d92b0: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d92b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d92b4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d92b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d92b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d92b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d92bc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d92bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d92c0: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4d92c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d92c4:
    // 0x4d92c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d92c8: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4d92c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d92cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D92CCu;
    {
        const bool branch_taken_0x4d92cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D92CCu;
        // 0x4d92d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d92cc) {
            ctx->pc = 0x4D92F0u;
            goto label_4d92f0;
        }
    }
    ctx->pc = 0x4D92D4u;
    // 0x4d92d4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D92D4u;
    {
        const bool branch_taken_0x4d92d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D92D4u;
        // 0x4d92d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d92d4) {
            ctx->pc = 0x4D9308u;
            goto label_4d9308;
        }
    }
    ctx->pc = 0x4D92DCu;
    // 0x4d92dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d92dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d92e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d92e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d92e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D92E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D92E4u;
        // 0x4d92e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D92E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D92ECu;
    // 0x4d92ec: 0x0  nop
    ctx->pc = 0x4d92ecu;
    // NOP
label_4d92f0:
    // 0x4d92f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d92f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d92f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d92f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d92f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d92f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d92fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d92fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9300: 0x81364c8  j           func_4D9320
    ctx->pc = 0x4D9300u;
    ctx->pc = 0x4D9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9300u;
    // 0x4d9304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9320u;
    goto label_4d9320;
    ctx->pc = 0x4D9308u;
label_4d9308:
    // 0x4d9308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d930c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d930cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9314: 0x81364f8  j           func_4D93E0
    ctx->pc = 0x4D9314u;
    ctx->pc = 0x4D9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9314u;
    // 0x4d9318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D93E0u;
    goto label_4d93e0;
    ctx->pc = 0x4D931Cu;
    // 0x4d931c: 0x0  nop
    ctx->pc = 0x4d931cu;
    // NOP
label_4d9320:
    // 0x4d9320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d9324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d9328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d9328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d932c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D932Cu;
    SET_GPR_U32(ctx, 31, 0x4D9334u);
    ctx->pc = 0x4D9330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D932Cu;
    // 0x4d9330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D932Cu, 0x4D9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9334u;
label_4d9334:
    // 0x4d9334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d9334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9338: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4D9338u;
    {
        const bool branch_taken_0x4d9338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9338u;
        // 0x4d933c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9338) {
            ctx->pc = 0x4D93D0u;
            goto label_4d93d0;
        }
    }
    ctx->pc = 0x4D9340u;
    // 0x4d9340: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D9340u;
    SET_GPR_U32(ctx, 31, 0x4D9348u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D9340u, 0x4D9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9348u;
label_4d9348:
    // 0x4d9348: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x4d9348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4d934c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x4d934cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x4d9350: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d9350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d9354: 0x26080128  addiu       $t0, $s0, 0x128
    ctx->pc = 0x4d9354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4d9358: 0x2609012c  addiu       $t1, $s0, 0x12C
    ctx->pc = 0x4d9358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4d935c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d935cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d9360: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4d9360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4d9364: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D9364u;
    {
        const bool branch_taken_0x4d9364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9364u;
        // 0x4d9368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9364) {
            ctx->pc = 0x4D93D0u;
            goto label_4d93d0;
        }
    }
    ctx->pc = 0x4D936Cu;
    // 0x4d936c: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d936cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d9370: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4d9370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d9374: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d9374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4d9378: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d9378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d937c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4d937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d9380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d9384: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d9384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d9388: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d9388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4d938c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9390: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4d9390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d9394: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d9394u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d9398: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4d9398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4d939c: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4d939cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d93a0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x4d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d93a4: 0xa4c3232c  sh          $v1, 0x232C($a2)
    ctx->pc = 0x4d93a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d93a8: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4D93A8u;
    SET_GPR_U32(ctx, 31, 0x4D93B0u);
    ctx->pc = 0x4D93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D93A8u;
    // 0x4d93ac: 0xa4c2232e  sh          $v0, 0x232E($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4D93A8u, 0x4D93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D93B0u;
label_4d93b0:
    // 0x4d93b0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D93B0u;
    SET_GPR_U32(ctx, 31, 0x4D93B8u);
    ctx->pc = 0x4D93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D93B0u;
    // 0x4d93b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D93B0u, 0x4D93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D93B8u;
label_4d93b8:
    // 0x4d93b8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D93B8u;
    SET_GPR_U32(ctx, 31, 0x4D93C0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D93B8u, 0x4D93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D93C0u;
label_4d93c0:
    // 0x4d93c0: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4d93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4d93c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d93c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d93c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d93cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d93ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d93d0:
    // 0x4d93d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d93d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d93d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d93d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d93d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D93D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D93D8u;
        // 0x4d93dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D93D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D93E0u;
label_4d93e0:
    // 0x4d93e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d93e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d93e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d93e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d93e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d93ec: 0x2490015e  addiu       $s0, $a0, 0x15E
    ctx->pc = 0x4d93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 350));
    // 0x4d93f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d93f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d93f4: 0x246610f0  addiu       $a2, $v1, 0x10F0
    ctx->pc = 0x4d93f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4336));
    // 0x4d93f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d93f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d93fc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d93fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d9400: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d9400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10F0u));
    // 0x4d9404: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d9404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4d9408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d940c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d9410: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d9410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d9414: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x4d9414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d9418: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d9418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d941c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4d941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4d9420: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x4d9420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4d9424: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D9424u;
    {
        const bool branch_taken_0x4d9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9424u;
        // 0x4d9428: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9424) {
            ctx->pc = 0x4D9470u;
            goto label_4d9470;
        }
    }
    ctx->pc = 0x4D942Cu;
    // 0x4d942c: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x4d942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4d9430: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d9430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d9434: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4d9434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d9438: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9438u;
    {
        const bool branch_taken_0x4d9438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9438) {
            ctx->pc = 0x4D943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9438u;
            // 0x4d943c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9454u;
            goto label_4d9454;
        }
    }
    ctx->pc = 0x4D9440u;
    // 0x4d9440: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d9440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d9444: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4d9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d9448: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4D9448u;
    SET_GPR_U32(ctx, 31, 0x4D9450u);
    ctx->pc = 0x4D944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9448u;
    // 0x4d944c: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4D9448u, 0x4D9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9450u;
label_4d9450:
    // 0x4d9450: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d9450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d9454:
    // 0x4d9454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d9454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d9458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d9458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d945c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d945cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9464: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9464u;
        // 0x4d9468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D946Cu;
    // 0x4d946c: 0x0  nop
    ctx->pc = 0x4d946cu;
    // NOP
label_4d9470:
    // 0x4d9470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d9474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d9478: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4D9478u;
    ctx->pc = 0x4D947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9478u;
    // 0x4d947c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9480u;
}
