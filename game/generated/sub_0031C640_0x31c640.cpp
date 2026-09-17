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

// Function: sub_0031C640
// Address: 0x31c640 - 0x31c7a8
void sub_0031C640_0x31c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C640_0x31c640");
#endif

    switch (ctx->pc) {
        case 0x31c67cu: goto label_31c67c;
        case 0x31c6ecu: goto label_31c6ec;
        case 0x31c70cu: goto label_31c70c;
        case 0x31c740u: goto label_31c740;
        default: break;
    }

    ctx->pc = 0x31c640u;

    // 0x31c640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31c644: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31c648: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x31c648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x31c64c: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x31c64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x31c650: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31c654: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31c658: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31c658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c65c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x31c65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x31c660: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31c660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c668: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31c66c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31c670: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x31c674: 0xc0c6ab8  jal         func_31AAE0
    ctx->pc = 0x31C674u;
    SET_GPR_U32(ctx, 31, 0x31C67Cu);
    ctx->pc = 0x31C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C674u;
    // 0x31c678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAE0u, 0x31C674u, 0x31C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C67Cu;
label_31c67c:
    // 0x31c67c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31c67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c680: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x31c680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x31c684: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31c688: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x31c68c: 0x69982  srl         $s3, $a2, 6
    ctx->pc = 0x31c68cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x31c690: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x31c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x31c694: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31c694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31c698: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31c69c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x31c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x31c6a0: 0x2a102  srl         $s4, $v0, 4
    ctx->pc = 0x31c6a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31c6a4: 0x2852825  or          $a1, $s4, $a1
    ctx->pc = 0x31c6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x31c6a8: 0x2842025  or          $a0, $s4, $a0
    ctx->pc = 0x31c6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x31c6ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31c6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c6b0: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x31c6b0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x31c6b4: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x31c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x31c6b8: 0x34069000  ori         $a2, $zero, 0x9000
    ctx->pc = 0x31c6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31c6bc: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x31c6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x31c6c0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x31c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x31c6c4: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x31c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x31c6c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c6cc: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x31c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x31c6d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31c6d4: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x31c6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x31c6d8: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x31c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x31c6dc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x31c6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31c6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6e4: 0xc0c6ade  jal         func_31AB78
    ctx->pc = 0x31C6E4u;
    SET_GPR_U32(ctx, 31, 0x31C6ECu);
    ctx->pc = 0x31C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6E4u;
    // 0x31c6e8: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB78u, 0x31C6E4u, 0x31C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6ECu;
label_31c6ec:
    // 0x31c6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31c6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x31c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31c6f4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31c6f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c6fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31c700: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x31c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x31c704: 0xc0c700a  jal         func_31C028
    ctx->pc = 0x31C704u;
    SET_GPR_U32(ctx, 31, 0x31C70Cu);
    ctx->pc = 0x31C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C704u;
    // 0x31c708: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C028u, 0x31C704u, 0x31C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C70Cu;
label_31c70c:
    // 0x31c70c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31c70cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c710: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x31C710u;
    {
        const bool branch_taken_0x31c710 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C710u;
        // 0x31c714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c710) {
            ctx->pc = 0x31C780u;
            goto label_31c780;
        }
    }
    ctx->pc = 0x31C718u;
    // 0x31c718: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31c71c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31c71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c720: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31c720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31c724: 0x9fa4000c  lwu         $a0, 0xC($sp)
    ctx->pc = 0x31c724u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31c728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c72c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x31c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31c730: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31c730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c734: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x31c734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
    // 0x31c738: 0x3443a  dsrl        $t0, $v1, 16
    ctx->pc = 0x31c738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 16);
    // 0x31c73c: 0x0  nop
    ctx->pc = 0x31c73cu;
    // NOP
label_31c740:
    // 0x31c740: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x31c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31c744: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x31c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x31c748: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x31c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31c74c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c750: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31c754: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x31c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x31c758: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x31c758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x31c75c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31c760: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31c764: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x31c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x31c768: 0xf3202b  sltu        $a0, $a3, $s3
    ctx->pc = 0x31c768u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x31c76c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x31c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x31c770: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x31c770u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x31c774: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31C774u;
    {
        const bool branch_taken_0x31c774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C774u;
        // 0x31c778: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c774) {
            ctx->pc = 0x31C740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c740;
        }
    }
    ctx->pc = 0x31C77Cu;
    // 0x31c77c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x31c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_31c780:
    // 0x31c780: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x31c780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x31c784: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31c784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c788: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31c788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c78c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31c790: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31c790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31c794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31c794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c798: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31c798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31c79c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31c79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31c7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x31C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7A0u;
        // 0x31c7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C7A8u;
}
