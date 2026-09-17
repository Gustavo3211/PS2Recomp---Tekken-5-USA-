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

// Function: sub_0048E578
// Address: 0x48e578 - 0x48e648
void sub_0048E578_0x48e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E578_0x48e578");
#endif

    switch (ctx->pc) {
        case 0x48e57cu: goto label_48e57c;
        case 0x48e580u: goto label_48e580;
        case 0x48e5e0u: goto label_48e5e0;
        case 0x48e5f0u: goto label_48e5f0;
        default: break;
    }

    ctx->pc = 0x48e578u;

    // 0x48e578: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x48e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_48e57c:
    // 0x48e57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e580:
    // 0x48e580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48e580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48e584: 0x3e00008  jr          $ra
    ctx->pc = 0x48E584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E584u;
        // 0x48e588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E58Cu;
    // 0x48e58c: 0x0  nop
    ctx->pc = 0x48e58cu;
    // NOP
    // 0x48e590: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48e594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e598: 0x8443d604  lh          $v1, -0x29FC($v0)
    ctx->pc = 0x48e598u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D604u));
    // 0x48e59c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E59Cu;
    {
        const bool branch_taken_0x48e59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E59Cu;
        // 0x48e5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e59c) {
            ctx->pc = 0x48E5C0u;
            goto label_48e5c0;
        }
    }
    ctx->pc = 0x48E5A4u;
    // 0x48e5a4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48e5a8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48e5ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x48e5acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D680u));
    // 0x48e5b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48e5b4: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x48e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48e5b8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E5B8u;
    {
        const bool branch_taken_0x48e5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5B8u;
        // 0x48e5bc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5b8) {
            ctx->pc = 0x48E5D0u;
            goto label_48e5d0;
        }
    }
    ctx->pc = 0x48E5C0u;
label_48e5c0:
    // 0x48e5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e5c4: 0x8123ac8  j           func_48EB20
    ctx->pc = 0x48E5C4u;
    ctx->pc = 0x48E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E5C4u;
    // 0x48e5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EB20u;
    sub_0048EB20_0x48eb20(rdram, ctx, runtime); return;
    ctx->pc = 0x48E5CCu;
    // 0x48e5cc: 0x0  nop
    ctx->pc = 0x48e5ccu;
    // NOP
label_48e5d0:
    // 0x48e5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x48E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5D4u;
        // 0x48e5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E5DCu;
    // 0x48e5dc: 0x0  nop
    ctx->pc = 0x48e5dcu;
    // NOP
label_48e5e0:
    // 0x48e5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e5e8: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48E5E8u;
    SET_GPR_U32(ctx, 31, 0x48E5F0u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48E5E8u, 0x48E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E5F0u;
label_48e5f0:
    // 0x48e5f0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x48e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x48e5f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e5f8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48e5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48e5fc: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x48e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e600: 0x24036300  addiu       $v1, $zero, 0x6300
    ctx->pc = 0x48e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
    // 0x48e604: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x48e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x48e608: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E608u;
    {
        const bool branch_taken_0x48e608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x48E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E608u;
        // 0x48e60c: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e608) {
            ctx->pc = 0x48E620u;
            goto label_48e620;
        }
    }
    ctx->pc = 0x48E610u;
    // 0x48e610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e614: 0x8123ac8  j           func_48EB20
    ctx->pc = 0x48E614u;
    ctx->pc = 0x48E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E614u;
    // 0x48e618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EB20u;
    sub_0048EB20_0x48eb20(rdram, ctx, runtime); return;
    ctx->pc = 0x48E61Cu;
    // 0x48e61c: 0x0  nop
    ctx->pc = 0x48e61cu;
    // NOP
label_48e620:
    // 0x48e620: 0x34a2ff00  ori         $v0, $a1, 0xFF00
    ctx->pc = 0x48e620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
    // 0x48e624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e628: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x48e628u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48e62c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48e630: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48e634: 0xa4c20008  sh          $v0, 0x8($a2)
    ctx->pc = 0x48e634u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x48e638: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x48e638u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48e63c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E63Cu;
        // 0x48e640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E644u;
    // 0x48e644: 0x0  nop
    ctx->pc = 0x48e644u;
    // NOP
    ctx->pc = 0x48e648u;
}
