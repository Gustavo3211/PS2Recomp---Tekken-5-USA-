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

// Function: sub_005075D8
// Address: 0x5075d8 - 0x507698
void sub_005075D8_0x5075d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005075D8_0x5075d8");
#endif

    switch (ctx->pc) {
        case 0x507604u: goto label_507604;
        case 0x507634u: goto label_507634;
        case 0x507670u: goto label_507670;
        default: break;
    }

    ctx->pc = 0x5075d8u;

    // 0x5075d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5075d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5075dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5075dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5075e0: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x5075e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x5075e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5075e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5075e8: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x5075e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x5075ec: 0x2631c568  addiu       $s1, $s1, -0x3A98
    ctx->pc = 0x5075ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952296));
    // 0x5075f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5075f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5075f4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x5075f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x5075f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x5075f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x5075fc: 0xc141cd0  jal         func_507340
    ctx->pc = 0x5075FCu;
    SET_GPR_U32(ctx, 31, 0x507604u);
    ctx->pc = 0x507600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5075FCu;
    // 0x507600: 0x2652c56c  addiu       $s2, $s2, -0x3A94 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507340u, 0x5075FCu, 0x507604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507604u;
label_507604:
    // 0x507604: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x507604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507608: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x507608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50760c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x50760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x507610: 0x361001f1  ori         $s0, $s0, 0x1F1
    ctx->pc = 0x507610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)497);
    // 0x507614: 0x34420168  ori         $v0, $v0, 0x168
    ctx->pc = 0x507614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)360);
    // 0x507618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50761c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50761cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x507620: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x507620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x507624: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x507624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x507628: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x507628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50762c: 0xc141cf6  jal         func_5073D8
    ctx->pc = 0x50762Cu;
    SET_GPR_U32(ctx, 31, 0x507634u);
    ctx->pc = 0x507630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50762Cu;
    // 0x507630: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5073D8u, 0x50762Cu, 0x507634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507634u;
label_507634:
    // 0x507634: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x507634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x507638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50763c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50763cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x507640: 0x34630187  ori         $v1, $v1, 0x187
    ctx->pc = 0x507640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)391);
    // 0x507644: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x507644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x507648: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x507648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50764c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x50764cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x507650: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x507650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x507654: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x507658: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x507658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x50765c: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x50765cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x507660: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x507660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x507664: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x507664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x507668: 0xc141cf6  jal         func_5073D8
    ctx->pc = 0x507668u;
    SET_GPR_U32(ctx, 31, 0x507670u);
    ctx->pc = 0x50766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507668u;
    // 0x50766c: 0xac65c55c  sw          $a1, -0x3AA4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952284), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5073D8u, 0x507668u, 0x507670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507670u;
label_507670:
    // 0x507670: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x507670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x507674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507678: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50767c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50767cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507680: 0x24427780  addiu       $v0, $v0, 0x7780
    ctx->pc = 0x507680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
    // 0x507684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x507684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507688: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x507688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50768c: 0xac62c578  sw          $v0, -0x3A88($v1)
    ctx->pc = 0x50768cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC578u, _value); } while (0);
    // 0x507690: 0x8141c8e  j           func_507238
    ctx->pc = 0x507690u;
    ctx->pc = 0x507694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507690u;
    // 0x507694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507238u, 0x507690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x507698u;
}
