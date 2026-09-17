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

// Function: sub_002413F0
// Address: 0x2413f0 - 0x2414d0
void sub_002413F0_0x2413f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002413F0_0x2413f0");
#endif

    switch (ctx->pc) {
        case 0x241420u: goto label_241420;
        case 0x24142cu: goto label_24142c;
        case 0x241478u: goto label_241478;
        case 0x241480u: goto label_241480;
        default: break;
    }

    ctx->pc = 0x2413f0u;

    // 0x2413f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2413f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2413f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2413f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2413f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2413f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2413fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241400: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241404: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x241404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241408: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x241408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24140c: 0x3c130016  lui         $s3, 0x16
    ctx->pc = 0x24140cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)22 << 16));
    // 0x241410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x241410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241414: 0x26713b20  addiu       $s1, $s3, 0x3B20
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 15136));
    // 0x241418: 0xc086454  jal         func_219150
    ctx->pc = 0x241418u;
    SET_GPR_U32(ctx, 31, 0x241420u);
    ctx->pc = 0x24141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241418u;
    // 0x24141c: 0x84840042  lh          $a0, 0x42($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219150u, 0x241418u, 0x241420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241420u;
label_241420:
    // 0x241420: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x241420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x241424: 0xc086454  jal         func_219150
    ctx->pc = 0x241424u;
    SET_GPR_U32(ctx, 31, 0x24142Cu);
    ctx->pc = 0x241428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241424u;
    // 0x241428: 0x86040042  lh          $a0, 0x42($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219150u, 0x241424u, 0x24142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24142Cu;
label_24142c:
    // 0x24142c: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x24142cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x241430: 0x2a430012  slti        $v1, $s2, 0x12
    ctx->pc = 0x241430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x241434: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x241434u;
    {
        const bool branch_taken_0x241434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241434u;
        // 0x241438: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241434) {
            ctx->pc = 0x241460u;
            goto label_241460;
        }
    }
    ctx->pc = 0x24143Cu;
    // 0x24143c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x241440: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x241444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241448: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x24144c: 0x2652eca0  addiu       $s2, $s2, -0x1360
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962336));
    // 0x241450: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x241450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x241454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x241454u;
    {
        const bool branch_taken_0x241454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241454u;
        // 0x241458: 0x26623b20  addiu       $v0, $s3, 0x3B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241454) {
            ctx->pc = 0x241468u;
            goto label_241468;
        }
    }
    ctx->pc = 0x24145Cu;
    // 0x24145c: 0x0  nop
    ctx->pc = 0x24145cu;
    // NOP
label_241460:
    // 0x241460: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241464: 0x26623b20  addiu       $v0, $s3, 0x3B20
    ctx->pc = 0x241464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15136));
label_241468:
    // 0x241468: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x241468u;
    {
        const bool branch_taken_0x241468 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241468u;
        // 0x24146c: 0xac52000c  sw          $s2, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241468) {
            ctx->pc = 0x2414B4u;
            goto label_2414b4;
        }
    }
    ctx->pc = 0x241470u;
    // 0x241470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241474: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_241478:
    // 0x241478: 0xc08eb14  jal         func_23AC50
    ctx->pc = 0x241478u;
    SET_GPR_U32(ctx, 31, 0x241480u);
    ctx->pc = 0x24147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241478u;
    // 0x24147c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC50u, 0x241478u, 0x241480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241480u;
label_241480:
    // 0x241480: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241484: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x241484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x241488: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24148c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x24148cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x241490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241494: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x241498: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x24149c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2414a0: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x2414a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2414a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2414a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2414ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2414ACu;
    {
        const bool branch_taken_0x2414ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2414B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414ACu;
        // 0x2414b0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414ac) {
            ctx->pc = 0x241478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241478;
        }
    }
    ctx->pc = 0x2414B4u;
label_2414b4:
    // 0x2414b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2414b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2414b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2414b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2414bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2414bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2414c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2414c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2414c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2414c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2414c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2414C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2414CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414C8u;
        // 0x2414cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2414C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2414D0u;
}
