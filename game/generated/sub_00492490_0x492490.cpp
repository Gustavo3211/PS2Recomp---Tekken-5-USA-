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

// Function: sub_00492490
// Address: 0x492490 - 0x492530
void sub_00492490_0x492490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492490_0x492490");
#endif

    switch (ctx->pc) {
        case 0x4924c4u: goto label_4924c4;
        default: break;
    }

    ctx->pc = 0x492490u;

    // 0x492490: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x492490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x492494: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x492494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x492498: 0x8443fd06  lh          $v1, -0x2FA($v0)
    ctx->pc = 0x492498u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x49249c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4924a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4924a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4924a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4924a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4924a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4924a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4924ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4924acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4924b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4924b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4924b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4924B4u;
    {
        const bool branch_taken_0x4924b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4924B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4924B4u;
        // 0x4924b8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4924b4) {
            ctx->pc = 0x4924C4u;
            goto label_4924c4;
        }
    }
    ctx->pc = 0x4924BCu;
    // 0x4924bc: 0xc12494c  jal         func_492530
    ctx->pc = 0x4924BCu;
    SET_GPR_U32(ctx, 31, 0x4924C4u);
    ctx->pc = 0x492530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492530u, 0x4924BCu, 0x4924C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4924C4u;
label_4924c4:
    // 0x4924c4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4924c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4924c8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4924c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4924cc: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4924ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4924d0: 0x103400  sll         $a2, $s0, 16
    ctx->pc = 0x4924d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4924d4: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x4924d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x4924d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4924d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4924dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4924dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4924e0: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x4924e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4924e4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4924e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4924e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4924e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4924ec: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x4924ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x4924f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4924f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4924f4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4924f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4924f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4924f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4924fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x492500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x492500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492504: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x492504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x492508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x492508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49250c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x49250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x492510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x492510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x492514: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x492514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x492518: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x492518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49251c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x49251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x492520: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x492520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x492524: 0x3e00008  jr          $ra
    ctx->pc = 0x492524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492524u;
        // 0x492528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49252Cu;
    // 0x49252c: 0x0  nop
    ctx->pc = 0x49252cu;
    // NOP
    ctx->pc = 0x492530u;
}
