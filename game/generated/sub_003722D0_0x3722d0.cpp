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

// Function: sub_003722D0
// Address: 0x3722d0 - 0x372348
void sub_003722D0_0x3722d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003722D0_0x3722d0");
#endif

    switch (ctx->pc) {
        case 0x372304u: goto label_372304;
        default: break;
    }

    ctx->pc = 0x3722d0u;

    // 0x3722d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3722d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3722d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3722d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3722d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3722dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3722dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722e0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x3722e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x3722e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3722e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3722e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3722e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3722ec: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3722ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3722f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3722f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3722f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3722f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3722f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3722fc: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x3722FCu;
    SET_GPR_U32(ctx, 31, 0x372304u);
    ctx->pc = 0x372300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3722FCu;
    // 0x372300: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x3722FCu, 0x372304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372304u;
label_372304:
    // 0x372304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372308: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37230c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x37230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x372310: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x372310u;
    {
        const bool branch_taken_0x372310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372310u;
        // 0x372314: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372310) {
            ctx->pc = 0x372330u;
            goto label_372330;
        }
    }
    ctx->pc = 0x372318u;
    // 0x372318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37231c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37231cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372324: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x372324u;
    ctx->pc = 0x372328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372324u;
    // 0x372328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x37232Cu;
    // 0x37232c: 0x0  nop
    ctx->pc = 0x37232cu;
    // NOP
label_372330:
    // 0x372330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x372334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37233c: 0x3e00008  jr          $ra
    ctx->pc = 0x37233Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37233Cu;
        // 0x372340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37233Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372344u;
    // 0x372344: 0x0  nop
    ctx->pc = 0x372344u;
    // NOP
    ctx->pc = 0x372348u;
}
