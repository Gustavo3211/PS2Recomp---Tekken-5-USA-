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

// Function: sub_00338150
// Address: 0x338150 - 0x338248
void sub_00338150_0x338150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338150_0x338150");
#endif

    switch (ctx->pc) {
        case 0x3381d0u: goto label_3381d0;
        case 0x338218u: goto label_338218;
        case 0x338220u: goto label_338220;
        case 0x338228u: goto label_338228;
        default: break;
    }

    ctx->pc = 0x338150u;

    // 0x338150: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x338150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338154: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338158: 0x81282  srl         $v0, $t0, 10
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 10));
    // 0x33815c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338164: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x338164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33816c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33816cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x338174: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x338174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33817c: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33817Cu;
    {
        const bool branch_taken_0x33817c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x338180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33817Cu;
        // 0x338180: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33817c) {
            ctx->pc = 0x338194u;
            goto label_338194;
        }
    }
    ctx->pc = 0x338184u;
    // 0x338184: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x338184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x338188: 0x310203ff  andi        $v0, $t0, 0x3FF
    ctx->pc = 0x338188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1023);
    // 0x33818c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33818Cu;
    {
        const bool branch_taken_0x33818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x338190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33818Cu;
        // 0x338190: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33818c) {
            ctx->pc = 0x3381A0u;
            goto label_3381a0;
        }
    }
    ctx->pc = 0x338194u;
label_338194:
    // 0x338194: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x338194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x338198: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x338198u;
    {
        const bool branch_taken_0x338198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338198u;
        // 0x33819c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338198) {
            ctx->pc = 0x33822Cu;
            goto label_33822c;
        }
    }
    ctx->pc = 0x3381A0u;
label_3381a0:
    // 0x3381a0: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3381a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3381a4: 0x24630a60  addiu       $v1, $v1, 0xA60
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x3381a8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3381a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3381ac: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x3381acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3381b0: 0x5088001f  beql        $a0, $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3381B0u;
    {
        const bool branch_taken_0x3381b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x3381b0) {
            ctx->pc = 0x3381B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3381B0u;
            // 0x3381b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338230u;
            goto label_338230;
        }
    }
    ctx->pc = 0x3381B8u;
    // 0x3381b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3381bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3381bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3381c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3381C0u;
    {
        const bool branch_taken_0x3381c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3381c0) {
            ctx->pc = 0x3381D4u;
            goto label_3381d4;
        }
    }
    ctx->pc = 0x3381C8u;
    // 0x3381c8: 0xc0cddb6  jal         func_3376D8
    ctx->pc = 0x3381C8u;
    SET_GPR_U32(ctx, 31, 0x3381D0u);
    ctx->pc = 0x3381CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3381C8u;
    // 0x3381cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376D8u, 0x3381C8u, 0x3381D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381D0u;
label_3381d0:
    // 0x3381d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3381d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3381d4:
    // 0x3381d4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3381D4u;
    {
        const bool branch_taken_0x3381d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381D4u;
        // 0x3381d8: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381d4) {
            ctx->pc = 0x3381F0u;
            goto label_3381f0;
        }
    }
    ctx->pc = 0x3381DCu;
    // 0x3381dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3381dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3381e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3381e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3381e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3381E4u;
    {
        const bool branch_taken_0x3381e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381E4u;
        // 0x3381e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381e4) {
            ctx->pc = 0x338218u;
            goto label_338218;
        }
    }
    ctx->pc = 0x3381ECu;
    // 0x3381ec: 0x0  nop
    ctx->pc = 0x3381ecu;
    // NOP
label_3381f0:
    // 0x3381f0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x3381f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3381f4: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x3381f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x3381f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3381fc: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x3381fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x338200: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x338200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x338204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x338208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338208u;
    {
        const bool branch_taken_0x338208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338208u;
        // 0x33820c: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338208) {
            ctx->pc = 0x338218u;
            goto label_338218;
        }
    }
    ctx->pc = 0x338210u;
    // 0x338210: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x338210u;
    SET_GPR_U32(ctx, 31, 0x338218u);
    ctx->pc = 0x338214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338210u;
    // 0x338214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x338210u, 0x338218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338218u;
label_338218:
    // 0x338218: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x338218u;
    SET_GPR_U32(ctx, 31, 0x338220u);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x338218u, 0x338220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338220u;
label_338220:
    // 0x338220: 0xc0cdd48  jal         func_337520
    ctx->pc = 0x338220u;
    SET_GPR_U32(ctx, 31, 0x338228u);
    ctx->pc = 0x338224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338220u;
    // 0x338224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337520u, 0x338220u, 0x338228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338228u;
label_338228:
    // 0x338228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33822c:
    // 0x33822c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33822cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338230:
    // 0x338230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x338238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33823c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33823cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338240: 0x3e00008  jr          $ra
    ctx->pc = 0x338240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338240u;
        // 0x338244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338248u;
}
