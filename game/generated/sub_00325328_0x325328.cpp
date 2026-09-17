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

// Function: sub_00325328
// Address: 0x325328 - 0x3254b8
void sub_00325328_0x325328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325328_0x325328");
#endif

    switch (ctx->pc) {
        case 0x325374u: goto label_325374;
        case 0x325388u: goto label_325388;
        case 0x3253b0u: goto label_3253b0;
        case 0x32541cu: goto label_32541c;
        case 0x325430u: goto label_325430;
        case 0x325480u: goto label_325480;
        case 0x325494u: goto label_325494;
        case 0x3254a0u: goto label_3254a0;
        default: break;
    }

    ctx->pc = 0x325328u;

    // 0x325328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32532c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x325334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325338: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x325338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x32533c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32533cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325344: 0x24440f00  addiu       $a0, $v0, 0xF00
    ctx->pc = 0x325344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x325348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32534c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325350: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x325350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325354: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325358: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x325358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32535c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x325360: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x325360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325364: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x325364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325368: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x325368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x32536c: 0xc0dd40c  jal         func_375030
    ctx->pc = 0x32536Cu;
    SET_GPR_U32(ctx, 31, 0x325374u);
    ctx->pc = 0x325370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32536Cu;
    // 0x325370: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375030u, 0x32536Cu, 0x325374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325374u;
label_325374:
    // 0x325374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325378: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x325378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32537c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x325380: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x325380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x325384: 0x0  nop
    ctx->pc = 0x325384u;
    // NOP
label_325388:
    // 0x325388: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x325388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32538c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32538cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x325390: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x325390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x325394: 0x0  nop
    ctx->pc = 0x325394u;
    // NOP
    // 0x325398: 0x0  nop
    ctx->pc = 0x325398u;
    // NOP
    // 0x32539c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32539Cu;
    {
        const bool branch_taken_0x32539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3253A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32539Cu;
        // 0x3253a0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32539c) {
            ctx->pc = 0x325388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325388;
        }
    }
    ctx->pc = 0x3253A4u;
    // 0x3253a4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x3253a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3253a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3253a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3253ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3253acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3253b0:
    // 0x3253b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3253b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3253b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3253b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3253b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3253b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3253bc: 0x0  nop
    ctx->pc = 0x3253bcu;
    // NOP
    // 0x3253c0: 0x0  nop
    ctx->pc = 0x3253c0u;
    // NOP
    // 0x3253c4: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3253C4u;
    {
        const bool branch_taken_0x3253c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3253C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253C4u;
        // 0x3253c8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253c4) {
            ctx->pc = 0x3253B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3253b0;
        }
    }
    ctx->pc = 0x3253CCu;
    // 0x3253cc: 0x26030048  addiu       $v1, $s0, 0x48
    ctx->pc = 0x3253ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x3253d0: 0x260b0058  addiu       $t3, $s0, 0x58
    ctx->pc = 0x3253d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3253d4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x3253d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3253d8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3253d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3253dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3253dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3253e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3253e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3253e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3253e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3253e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3253ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3253f0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3253f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3253f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3253f8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x3253f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3253fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x325400: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x325400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325404: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x325404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x325408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32540c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x32540cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x325410: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x325410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325414: 0xc0c9538  jal         func_3254E0
    ctx->pc = 0x325414u;
    SET_GPR_U32(ctx, 31, 0x32541Cu);
    ctx->pc = 0x325418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325414u;
    // 0x325418: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254E0u, 0x325414u, 0x32541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32541Cu;
label_32541c:
    // 0x32541c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32541cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x325420: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x325420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325424: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x325424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325428: 0xc0cb1a6  jal         func_32C698
    ctx->pc = 0x325428u;
    SET_GPR_U32(ctx, 31, 0x325430u);
    ctx->pc = 0x32542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325428u;
    // 0x32542c: 0x24840f40  addiu       $a0, $a0, 0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C698u, 0x325428u, 0x325430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325430u;
label_325430:
    // 0x325430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32543c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32543cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325440: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325444: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x325444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325448: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32544c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32544cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325450: 0x3e00008  jr          $ra
    ctx->pc = 0x325450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325450u;
        // 0x325454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325458u;
    // 0x325458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32545c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325460: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x325464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x325468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32546c: 0x26100f40  addiu       $s0, $s0, 0xF40
    ctx->pc = 0x32546cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
    // 0x325470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x325474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x325478: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x325478u;
    SET_GPR_U32(ctx, 31, 0x325480u);
    ctx->pc = 0x32547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325478u;
    // 0x32547c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x325478u, 0x325480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325480u;
label_325480:
    // 0x325480: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x325480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x325484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x325488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32548c: 0xc0dd412  jal         func_375048
    ctx->pc = 0x32548Cu;
    SET_GPR_U32(ctx, 31, 0x325494u);
    ctx->pc = 0x325490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32548Cu;
    // 0x325490: 0x24840f00  addiu       $a0, $a0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375048u, 0x32548Cu, 0x325494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325494u;
label_325494:
    // 0x325494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325498: 0xc0cb1d0  jal         func_32C740
    ctx->pc = 0x325498u;
    SET_GPR_U32(ctx, 31, 0x3254A0u);
    ctx->pc = 0x32549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325498u;
    // 0x32549c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C740u, 0x325498u, 0x3254A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254A0u;
label_3254a0:
    // 0x3254a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3254a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3254a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3254a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3254a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3254a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3254ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3254ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3254B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254ACu;
        // 0x3254b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3254B4u;
    // 0x3254b4: 0x0  nop
    ctx->pc = 0x3254b4u;
    // NOP
    ctx->pc = 0x3254b8u;
}
