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

// Function: sub_00507698
// Address: 0x507698 - 0x507758
void sub_00507698_0x507698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507698_0x507698");
#endif

    switch (ctx->pc) {
        case 0x5076c4u: goto label_5076c4;
        case 0x5076f4u: goto label_5076f4;
        case 0x507730u: goto label_507730;
        default: break;
    }

    ctx->pc = 0x507698u;

    // 0x507698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x507698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50769c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5076a0: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x5076a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x5076a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5076a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5076a8: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x5076a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x5076ac: 0x2631c568  addiu       $s1, $s1, -0x3A98
    ctx->pc = 0x5076acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952296));
    // 0x5076b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5076b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5076b4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x5076b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x5076b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x5076b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x5076bc: 0xc141cd0  jal         func_507340
    ctx->pc = 0x5076BCu;
    SET_GPR_U32(ctx, 31, 0x5076C4u);
    ctx->pc = 0x5076C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5076BCu;
    // 0x5076c0: 0x2652c56c  addiu       $s2, $s2, -0x3A94 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507340u, 0x5076BCu, 0x5076C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5076C4u;
label_5076c4:
    // 0x5076c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5076c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5076c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5076cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x5076ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5076d0: 0x361001f1  ori         $s0, $s0, 0x1F1
    ctx->pc = 0x5076d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)497);
    // 0x5076d4: 0x34420168  ori         $v0, $v0, 0x168
    ctx->pc = 0x5076d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)360);
    // 0x5076d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5076d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5076dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5076dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5076e0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x5076e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x5076e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5076e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x5076e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5076e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5076ec: 0xc141cf6  jal         func_5073D8
    ctx->pc = 0x5076ECu;
    SET_GPR_U32(ctx, 31, 0x5076F4u);
    ctx->pc = 0x5076F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5076ECu;
    // 0x5076f0: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5073D8u, 0x5076ECu, 0x5076F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5076F4u;
label_5076f4:
    // 0x5076f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x5076f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5076f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x5076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5076fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x5076fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x507700: 0x34630187  ori         $v1, $v1, 0x187
    ctx->pc = 0x507700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)391);
    // 0x507704: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x507704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x507708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x507708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50770c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x50770cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x507710: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x507710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x507714: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x507718: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x507718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x50771c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x50771cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x507720: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x507720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x507724: 0x34a55c36  ori         $a1, $a1, 0x5C36
    ctx->pc = 0x507724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23606);
    // 0x507728: 0xc141cf6  jal         func_5073D8
    ctx->pc = 0x507728u;
    SET_GPR_U32(ctx, 31, 0x507730u);
    ctx->pc = 0x50772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507728u;
    // 0x50772c: 0xac65c55c  sw          $a1, -0x3AA4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952284), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5073D8u, 0x507728u, 0x507730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507730u;
label_507730:
    // 0x507730: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x507730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x507734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507738: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50773c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50773cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507740: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x507740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x507744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x507744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x507748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50774c: 0xac62c578  sw          $v0, -0x3A88($v1)
    ctx->pc = 0x50774cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC578u, _value); } while (0);
    // 0x507750: 0x8141c8e  j           func_507238
    ctx->pc = 0x507750u;
    ctx->pc = 0x507754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507750u;
    // 0x507754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507238u, 0x507750u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x507758u;
}
