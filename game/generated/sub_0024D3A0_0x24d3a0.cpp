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

// Function: sub_0024D3A0
// Address: 0x24d3a0 - 0x24d4b0
void sub_0024D3A0_0x24d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D3A0_0x24d3a0");
#endif

    switch (ctx->pc) {
        case 0x24d3d8u: goto label_24d3d8;
        case 0x24d3ecu: goto label_24d3ec;
        case 0x24d400u: goto label_24d400;
        case 0x24d438u: goto label_24d438;
        case 0x24d450u: goto label_24d450;
        case 0x24d464u: goto label_24d464;
        default: break;
    }

    ctx->pc = 0x24d3a0u;

    // 0x24d3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d3a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24d3ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24d3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d3b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d3bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24d3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d3c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24d3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24d3cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24d3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3d0: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x24d3d4: 0x0  nop
    ctx->pc = 0x24d3d4u;
    // NOP
label_24d3d8:
    // 0x24d3d8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x24d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x24d3dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24d3e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x24d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24d3e4: 0xc09301c  jal         func_24C070
    ctx->pc = 0x24D3E4u;
    SET_GPR_U32(ctx, 31, 0x24D3ECu);
    ctx->pc = 0x24D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3E4u;
    // 0x24d3e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C070u, 0x24D3E4u, 0x24D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3ECu;
label_24d3ec:
    // 0x24d3ec: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24d3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d3f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24D3F0u;
    {
        const bool branch_taken_0x24d3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3F0u;
        // 0x24d3f4: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3f0) {
            ctx->pc = 0x24D3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d3d8;
        }
    }
    ctx->pc = 0x24D3F8u;
    // 0x24d3f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3fc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24d3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d400:
    // 0x24d400: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x24d400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x24d404: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x24d404u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x24d408: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x24d408u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24d40c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24d40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24d410: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24d414: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x24d414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x24d418: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x24d418u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24d41c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x24d41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x24d420: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x24d424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d428: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x24d428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x24d42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d430: 0xc093260  jal         func_24C980
    ctx->pc = 0x24D430u;
    SET_GPR_U32(ctx, 31, 0x24D438u);
    ctx->pc = 0x24D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D430u;
    // 0x24d434: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C980u, 0x24D430u, 0x24D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D438u;
label_24d438:
    // 0x24d438: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x24d438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d43c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24D43Cu;
    {
        const bool branch_taken_0x24d43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D43Cu;
        // 0x24d440: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d43c) {
            ctx->pc = 0x24D400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d400;
        }
    }
    ctx->pc = 0x24D444u;
    // 0x24d444: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d448: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x24d448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x24d44c: 0x0  nop
    ctx->pc = 0x24d44cu;
    // NOP
label_24d450:
    // 0x24d450: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x24d450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x24d454: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24d454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24d458: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x24d458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24d45c: 0xc093130  jal         func_24C4C0
    ctx->pc = 0x24D45Cu;
    SET_GPR_U32(ctx, 31, 0x24D464u);
    ctx->pc = 0x24D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D45Cu;
    // 0x24d460: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C4C0u, 0x24D45Cu, 0x24D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D464u;
label_24d464:
    // 0x24d464: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24d464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d468: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24D468u;
    {
        const bool branch_taken_0x24d468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D468u;
        // 0x24d46c: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d468) {
            ctx->pc = 0x24D450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d450;
        }
    }
    ctx->pc = 0x24D470u;
    // 0x24d470: 0x82420022  lb          $v0, 0x22($s2)
    ctx->pc = 0x24d470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x24d474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D474u;
    {
        const bool branch_taken_0x24d474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D474u;
        // 0x24d478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d474) {
            ctx->pc = 0x24D484u;
            goto label_24d484;
        }
    }
    ctx->pc = 0x24D47Cu;
    // 0x24d47c: 0x82420092  lb          $v0, 0x92($s2)
    ctx->pc = 0x24d47cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x24d480: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x24d480u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24d484:
    // 0x24d484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24d488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d494: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d498: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24d498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d49c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24d49cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d4a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24d4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4A4u;
        // 0x24d4a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D4ACu;
    // 0x24d4ac: 0x0  nop
    ctx->pc = 0x24d4acu;
    // NOP
    ctx->pc = 0x24d4b0u;
}
