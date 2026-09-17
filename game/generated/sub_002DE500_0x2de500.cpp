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

// Function: sub_002DE500
// Address: 0x2de500 - 0x2de590
void sub_002DE500_0x2de500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE500_0x2de500");
#endif

    switch (ctx->pc) {
        case 0x2de524u: goto label_2de524;
        case 0x2de530u: goto label_2de530;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de558u: goto label_2de558;
        default: break;
    }

    ctx->pc = 0x2de500u;

    // 0x2de500: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2de500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2de504: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2de504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2de508: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2de508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2de50c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2de50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de510: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2de510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2de514: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2de514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2de518: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2de518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2de51c: 0xc0b78f4  jal         func_2DE3D0
    ctx->pc = 0x2DE51Cu;
    SET_GPR_U32(ctx, 31, 0x2DE524u);
    ctx->pc = 0x2DE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE51Cu;
    // 0x2de520: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE3D0u, 0x2DE51Cu, 0x2DE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE524u;
label_2de524:
    // 0x2de524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de528: 0x6200011  bltz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE528u;
    {
        const bool branch_taken_0x2de528 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2DE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE528u;
        // 0x2de52c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de528) {
            ctx->pc = 0x2DE570u;
            goto label_2de570;
        }
    }
    ctx->pc = 0x2DE530u;
label_2de530:
    // 0x2de530: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2de530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2de534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE534u;
    {
        const bool branch_taken_0x2de534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE534u;
        // 0x2de538: 0x2111826  xor         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de534) {
            ctx->pc = 0x2DE564u;
            goto label_2de564;
        }
    }
    ctx->pc = 0x2DE53Cu;
    // 0x2de53c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2de540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de544: 0xc0b790e  jal         func_2DE438
    ctx->pc = 0x2DE544u;
    SET_GPR_U32(ctx, 31, 0x2DE54Cu);
    ctx->pc = 0x2DE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE544u;
    // 0x2de548: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE438u, 0x2DE544u, 0x2DE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE54Cu;
label_2de54c:
    // 0x2de54c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de550: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2DE550u;
    SET_GPR_U32(ctx, 31, 0x2DE558u);
    ctx->pc = 0x2DE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE550u;
    // 0x2de554: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2DE550u, 0x2DE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE558u;
label_2de558:
    // 0x2de558: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DE558u;
    {
        const bool branch_taken_0x2de558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de558) {
            ctx->pc = 0x2DE55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE558u;
            // 0x2de55c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de530;
        }
    }
    ctx->pc = 0x2DE560u;
    // 0x2de560: 0x2111826  xor         $v1, $s0, $s1
    ctx->pc = 0x2de560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_2de564:
    // 0x2de564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2de564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de568: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2de568u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x2de56c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2de56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2de570:
    // 0x2de570: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2de570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de574: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2de574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2de578: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2de578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de57c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2de57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2de580: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2de580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2de584: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE584u;
        // 0x2de588: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE58Cu;
    // 0x2de58c: 0x0  nop
    ctx->pc = 0x2de58cu;
    // NOP
    ctx->pc = 0x2de590u;
}
