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

// Function: sub_00126388
// Address: 0x126388 - 0x126418
void sub_00126388_0x126388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126388_0x126388");
#endif

    switch (ctx->pc) {
        case 0x126388u: goto label_126388;
        case 0x12638cu: goto label_12638c;
        case 0x126390u: goto label_126390;
        case 0x126394u: goto label_126394;
        case 0x126398u: goto label_126398;
        case 0x12639cu: goto label_12639c;
        case 0x1263a0u: goto label_1263a0;
        case 0x1263a4u: goto label_1263a4;
        case 0x1263a8u: goto label_1263a8;
        case 0x1263acu: goto label_1263ac;
        case 0x1263b0u: goto label_1263b0;
        case 0x1263b4u: goto label_1263b4;
        case 0x1263b8u: goto label_1263b8;
        case 0x1263bcu: goto label_1263bc;
        case 0x1263c0u: goto label_1263c0;
        case 0x1263c4u: goto label_1263c4;
        case 0x1263c8u: goto label_1263c8;
        case 0x1263ccu: goto label_1263cc;
        case 0x1263d0u: goto label_1263d0;
        case 0x1263d4u: goto label_1263d4;
        case 0x1263d8u: goto label_1263d8;
        case 0x1263dcu: goto label_1263dc;
        case 0x1263e0u: goto label_1263e0;
        case 0x1263e4u: goto label_1263e4;
        case 0x1263e8u: goto label_1263e8;
        case 0x1263ecu: goto label_1263ec;
        case 0x1263f0u: goto label_1263f0;
        case 0x1263f4u: goto label_1263f4;
        case 0x1263f8u: goto label_1263f8;
        case 0x1263fcu: goto label_1263fc;
        case 0x126400u: goto label_126400;
        case 0x126404u: goto label_126404;
        case 0x126408u: goto label_126408;
        case 0x12640cu: goto label_12640c;
        case 0x126410u: goto label_126410;
        case 0x126414u: goto label_126414;
        default: break;
    }

    ctx->pc = 0x126388u;

label_126388:
    // 0x126388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_12638c:
    // 0x12638c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_126390:
    // 0x126390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_126394:
    // 0x126394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_126398:
    // 0x126398: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x126398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12639c:
    // 0x12639c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1263a0:
    // 0x1263a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1263a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1263a4:
    // 0x1263a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1263a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1263a8:
    // 0x1263a8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1263a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1263ac:
    // 0x1263ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1263acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1263b0:
    // 0x1263b0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1263b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1263b4:
    // 0x1263b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1263b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1263b8:
    // 0x1263b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1263b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1263bc:
    // 0x1263bc: 0x80f809  jalr        $a0
label_1263c0:
    if (ctx->pc == 0x1263C0u) {
        ctx->pc = 0x1263C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263BCu;
        // 0x1263c0: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1263C4u;
        goto label_1263c4;
    }
    ctx->pc = 0x1263BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1263C4u);
        ctx->pc = 0x1263C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263BCu;
        // 0x1263c0: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1263BCu, 0x1263C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1263C4u;
label_1263c4:
    // 0x1263c4: 0x260f809  jalr        $s3
label_1263c8:
    if (ctx->pc == 0x1263C8u) {
        ctx->pc = 0x1263C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C4u;
        // 0x1263c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1263CCu;
        goto label_1263cc;
    }
    ctx->pc = 0x1263C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1263CCu);
        ctx->pc = 0x1263C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C4u;
        // 0x1263c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1263C4u, 0x1263CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1263CCu;
label_1263cc:
    // 0x1263cc: 0x240f809  jalr        $s2
label_1263d0:
    if (ctx->pc == 0x1263D0u) {
        ctx->pc = 0x1263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263CCu;
        // 0x1263d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1263D4u;
        goto label_1263d4;
    }
    ctx->pc = 0x1263CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1263D4u);
        ctx->pc = 0x1263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263CCu;
        // 0x1263d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1263CCu, 0x1263D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1263D4u;
label_1263d4:
    // 0x1263d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1263d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1263d8:
    // 0x1263d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1263d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1263dc:
    // 0x1263dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1263dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1263e0:
    // 0x1263e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1263e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1263e4:
    // 0x1263e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1263e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1263e8:
    // 0x1263e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1263e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1263ec:
    // 0x1263ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1263ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1263f0:
    // 0x1263f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1263f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1263f4:
    // 0x1263f4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1263f8:
    // 0x1263f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1263f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1263fc:
    // 0x1263fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1263fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126400:
    // 0x126400: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126404:
    // 0x126404: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126408:
    // 0x126408: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x126408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12640c:
    // 0x12640c: 0x80493f8  j           func_124FE0
label_126410:
    if (ctx->pc == 0x126410u) {
        ctx->pc = 0x126410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12640Cu;
        // 0x126410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126414u;
        goto label_126414;
    }
    ctx->pc = 0x12640Cu;
    ctx->pc = 0x126410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12640Cu;
    // 0x126410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FE0u;
    sub_00124FE0_0x124fe0(rdram, ctx, runtime); return;
    ctx->pc = 0x126414u;
label_126414:
    // 0x126414: 0x0  nop
    ctx->pc = 0x126414u;
    // NOP
    ctx->pc = 0x126418u;
}
