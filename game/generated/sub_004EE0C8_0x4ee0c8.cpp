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

// Function: sub_004EE0C8
// Address: 0x4ee0c8 - 0x4ee178
void sub_004EE0C8_0x4ee0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE0C8_0x4ee0c8");
#endif

    switch (ctx->pc) {
        case 0x4ee150u: goto label_4ee150;
        default: break;
    }

    ctx->pc = 0x4ee0c8u;

    // 0x4ee0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee0cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ee0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ee0d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee0d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee0d8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ee0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ee0dc: 0x8c461208  lw          $a2, 0x1208($v0)
    ctx->pc = 0x4ee0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4ee0e0: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4ee0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ee0e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ee0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ee0e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ee0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee0ec: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4ee0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4ee0f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee0f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee0f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee0fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee100: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee104: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ee104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee108: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4ee108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4ee10c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ee10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ee110: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ee110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ee114: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee118: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee11c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee120: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ee120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee124: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EE124u;
    {
        const bool branch_taken_0x4ee124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE124u;
        // 0x4ee128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee124) {
            ctx->pc = 0x4EE140u;
            goto label_4ee140;
        }
    }
    ctx->pc = 0x4EE12Cu;
    // 0x4ee12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee134: 0x813b9f2  j           func_4EE7C8
    ctx->pc = 0x4EE134u;
    ctx->pc = 0x4EE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE134u;
    // 0x4ee138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE7C8u, 0x4EE134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EE13Cu;
    // 0x4ee13c: 0x0  nop
    ctx->pc = 0x4ee13cu;
    // NOP
label_4ee140:
    // 0x4ee140: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ee140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ee144: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x4ee144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4ee148: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4EE148u;
    SET_GPR_U32(ctx, 31, 0x4EE150u);
    ctx->pc = 0x4EE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE148u;
    // 0x4ee14c: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4EE148u, 0x4EE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE150u;
label_4ee150:
    // 0x4ee150: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4ee150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ee154: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4ee154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ee158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee160: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ee160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee168: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee16c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ee16cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee170: 0x813b85e  j           func_4EE178
    ctx->pc = 0x4EE170u;
    ctx->pc = 0x4EE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE170u;
    // 0x4ee174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE178u;
    sub_004EE178_0x4ee178(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE178u;
}
