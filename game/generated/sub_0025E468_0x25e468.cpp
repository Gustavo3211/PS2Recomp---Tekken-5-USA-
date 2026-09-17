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

// Function: sub_0025E468
// Address: 0x25e468 - 0x25e530
void sub_0025E468_0x25e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E468_0x25e468");
#endif

    switch (ctx->pc) {
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4f4u: goto label_25e4f4;
        default: break;
    }

    ctx->pc = 0x25e468u;

    // 0x25e468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e46c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25e470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e478: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25e47c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25e480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e484: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x25e484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25e488: 0x86240042  lh          $a0, 0x42($s1)
    ctx->pc = 0x25e488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x25e48c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e490: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x25e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25e494: 0x8c63ca28  lw          $v1, -0x35D8($v1)
    ctx->pc = 0x25e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953512)));
    // 0x25e498: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25E498u;
    {
        const bool branch_taken_0x25e498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x25E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E498u;
        // 0x25e49c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e498) {
            ctx->pc = 0x25E518u;
            goto label_25e518;
        }
    }
    ctx->pc = 0x25E4A0u;
    // 0x25e4a0: 0x96220838  lhu         $v0, 0x838($s1)
    ctx->pc = 0x25e4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x25e4a4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x25e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x25e4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E4A8u;
    {
        const bool branch_taken_0x25e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4A8u;
        // 0x25e4ac: 0x2623082c  addiu       $v1, $s1, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4a8) {
            ctx->pc = 0x25E4B8u;
            goto label_25e4b8;
        }
    }
    ctx->pc = 0x25E4B0u;
    // 0x25e4b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25E4B0u;
    {
        const bool branch_taken_0x25e4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4B0u;
        // 0x25e4b4: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4b0) {
            ctx->pc = 0x25E4BCu;
            goto label_25e4bc;
        }
    }
    ctx->pc = 0x25E4B8u;
label_25e4b8:
    // 0x25e4b8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x25e4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e4bc:
    // 0x25e4bc: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x25e4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e4c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4c4: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x25e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x25e4c8: 0x8c530050  lw          $s3, 0x50($v0)
    ctx->pc = 0x25e4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x25e4cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x25e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_25e4d0:
    // 0x25e4d0: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x25e4d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25e4d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25e4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25e4d8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x25e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25e4dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25e4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25e4e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25e4e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4e8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x25e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x25e4ec: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25E4ECu;
    SET_GPR_U32(ctx, 31, 0x25E4F4u);
    ctx->pc = 0x25E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4ECu;
    // 0x25e4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25E4ECu, 0x25E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4F4u;
label_25e4f4:
    // 0x25e4f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x25e4f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e4f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x25E4F8u;
    {
        const bool branch_taken_0x25e4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4F8u;
        // 0x25e4fc: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4f8) {
            ctx->pc = 0x25E4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e4d0;
        }
    }
    ctx->pc = 0x25E500u;
    // 0x25e500: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x25e500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25e504: 0x86230042  lh          $v1, 0x42($s1)
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x25e508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e50c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25e510: 0xac23ca28  sw          $v1, -0x35D8($at)
    ctx->pc = 0x25e510u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953512), GPR_U32(ctx, 3));
    // 0x25e514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e518:
    // 0x25e518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25e518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e51c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25e51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25e520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25e524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e528: 0x3e00008  jr          $ra
    ctx->pc = 0x25E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E528u;
        // 0x25e52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E530u;
}
