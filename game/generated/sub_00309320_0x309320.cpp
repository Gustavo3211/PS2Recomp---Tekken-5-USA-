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

// Function: sub_00309320
// Address: 0x309320 - 0x3093a8
void sub_00309320_0x309320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309320_0x309320");
#endif

    switch (ctx->pc) {
        case 0x309360u: goto label_309360;
        case 0x30936cu: goto label_30936c;
        default: break;
    }

    ctx->pc = 0x309320u;

    // 0x309320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x309324: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x309324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x309328: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x309328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x30932c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x309330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309334: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x309334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x309338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30933c: 0x3c11001b  lui         $s1, 0x1B
    ctx->pc = 0x30933cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27 << 16));
    // 0x309340: 0x2631eda8  addiu       $s1, $s1, -0x1258
    ctx->pc = 0x309340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962600));
    // 0x309344: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x309344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x309348: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x309348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30934c: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x30934cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x309350: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x309350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x309354: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x309354u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x309358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30935c: 0x0  nop
    ctx->pc = 0x30935cu;
    // NOP
label_309360:
    // 0x309360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x309360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309364: 0xc0c24ea  jal         func_3093A8
    ctx->pc = 0x309364u;
    SET_GPR_U32(ctx, 31, 0x30936Cu);
    ctx->pc = 0x309368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309364u;
    // 0x309368: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3093A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3093A8u, 0x309364u, 0x30936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30936Cu;
label_30936c:
    // 0x30936c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x30936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x309370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x309370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x309374: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x309374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x309378: 0x2e020100  sltiu       $v0, $s0, 0x100
    ctx->pc = 0x309378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x30937c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30937Cu;
    {
        const bool branch_taken_0x30937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30937Cu;
        // 0x309380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30937c) {
            ctx->pc = 0x309360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309360;
        }
    }
    ctx->pc = 0x309384u;
    // 0x309384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x309388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30938c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30938cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309390: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x309390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309394: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x309394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30939c: 0x80c26aa  j           func_309AA8
    ctx->pc = 0x30939Cu;
    ctx->pc = 0x3093A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30939Cu;
    // 0x3093a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA8u;
    sub_00309AA8_0x309aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x3093A4u;
    // 0x3093a4: 0x0  nop
    ctx->pc = 0x3093a4u;
    // NOP
    ctx->pc = 0x3093a8u;
}
