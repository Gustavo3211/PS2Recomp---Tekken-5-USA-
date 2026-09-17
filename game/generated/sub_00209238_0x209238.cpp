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

// Function: sub_00209238
// Address: 0x209238 - 0x209310
void sub_00209238_0x209238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209238_0x209238");
#endif

    switch (ctx->pc) {
        case 0x209260u: goto label_209260;
        case 0x209280u: goto label_209280;
        case 0x20928cu: goto label_20928c;
        case 0x20929cu: goto label_20929c;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d4u: goto label_2092d4;
        default: break;
    }

    ctx->pc = 0x209238u;

    // 0x209238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20923c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x209248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20924c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x209250: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x209250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x209254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x209254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209258: 0xc0821d0  jal         func_208740
    ctx->pc = 0x209258u;
    SET_GPR_U32(ctx, 31, 0x209260u);
    ctx->pc = 0x20925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209258u;
    // 0x20925c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x209258u, 0x209260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209260u;
label_209260:
    // 0x209260: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x209260u;
    {
        const bool branch_taken_0x209260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209260u;
        // 0x209264: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209260) {
            ctx->pc = 0x2092ECu;
            goto label_2092ec;
        }
    }
    ctx->pc = 0x209268u;
    // 0x209268: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20926c: 0x24558858  addiu       $s5, $v0, -0x77A8
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x209270: 0x2414001a  addiu       $s4, $zero, 0x1A
    ctx->pc = 0x209270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x209274: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x209274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20927c: 0x0  nop
    ctx->pc = 0x20927cu;
    // NOP
label_209280:
    // 0x209280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209284: 0xc086f46  jal         func_21BD18
    ctx->pc = 0x209284u;
    SET_GPR_U32(ctx, 31, 0x20928Cu);
    ctx->pc = 0x209288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209284u;
    // 0x209288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD18u, 0x209284u, 0x20928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209294: 0xc085048  jal         func_214120
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 31, 0x20929Cu);
    ctx->pc = 0x209298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209294u;
    // 0x209298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214120u, 0x209294u, 0x20929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20929Cu;
label_20929c:
    // 0x20929c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2092A4u;
    {
        const bool branch_taken_0x2092a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2092A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092A4u;
        // 0x2092a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092a4) {
            ctx->pc = 0x2092DCu;
            goto label_2092dc;
        }
    }
    ctx->pc = 0x2092ACu;
    // 0x2092ac: 0xc0823f0  jal         func_208FC0
    ctx->pc = 0x2092ACu;
    SET_GPR_U32(ctx, 31, 0x2092B4u);
    ctx->pc = 0x2092B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092ACu;
    // 0x2092b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208FC0u, 0x2092ACu, 0x2092B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092B4u;
label_2092b4:
    // 0x2092b4: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2092B4u;
    SET_GPR_U32(ctx, 31, 0x2092BCu);
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2092B4u, 0x2092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092BCu;
label_2092bc:
    // 0x2092bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2092bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2092c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2092c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092c4: 0xc092460  jal         func_249180
    ctx->pc = 0x2092C4u;
    SET_GPR_U32(ctx, 31, 0x2092CCu);
    ctx->pc = 0x2092C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092C4u;
    // 0x2092c8: 0xaeb40014  sw          $s4, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2092C4u, 0x2092CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092CCu;
label_2092cc:
    // 0x2092cc: 0xc092958  jal         func_24A560
    ctx->pc = 0x2092CCu;
    SET_GPR_U32(ctx, 31, 0x2092D4u);
    ctx->pc = 0x2092D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092CCu;
    // 0x2092d0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x2092CCu, 0x2092D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092D4u;
label_2092d4:
    // 0x2092d4: 0xaf93c8c8  sw          $s3, -0x3738($gp)
    ctx->pc = 0x2092d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 19));
    // 0x2092d8: 0xaf809718  sw          $zero, -0x68E8($gp)
    ctx->pc = 0x2092d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
label_2092dc:
    // 0x2092dc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2092dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2092e0: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2092E0u;
    {
        const bool branch_taken_0x2092e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2092e0) {
            ctx->pc = 0x2092E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092E0u;
            // 0x2092e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209280;
        }
    }
    ctx->pc = 0x2092E8u;
    // 0x2092e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2092e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2092ec:
    // 0x2092ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2092ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2092f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2092f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2092f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2092f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2092f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2092f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2092fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2092fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209300: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x209300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209304: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209308: 0x3e00008  jr          $ra
    ctx->pc = 0x209308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209308u;
        // 0x20930c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209310u;
}
