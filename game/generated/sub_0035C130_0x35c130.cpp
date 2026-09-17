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

// Function: sub_0035C130
// Address: 0x35c130 - 0x35c1e8
void sub_0035C130_0x35c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C130_0x35c130");
#endif

    switch (ctx->pc) {
        case 0x35c17cu: goto label_35c17c;
        case 0x35c1c0u: goto label_35c1c0;
        default: break;
    }

    ctx->pc = 0x35c130u;

    // 0x35c130: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x35c130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35c134: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35c134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35c138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c13c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35c140: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35c144: 0xac232ae8  sw          $v1, 0x2AE8($at)
    ctx->pc = 0x35c144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10984), GPR_U32(ctx, 3));
    // 0x35c148: 0x3e00008  jr          $ra
    ctx->pc = 0x35C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C150u;
    // 0x35c150: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35c150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35c154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c158: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c15c: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x35c15cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c164: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c168: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C168u;
    {
        const bool branch_taken_0x35c168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C168u;
        // 0x35c16c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c168) {
            ctx->pc = 0x35C188u;
            goto label_35c188;
        }
    }
    ctx->pc = 0x35C170u;
    // 0x35c170: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c174: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C174u;
    SET_GPR_U32(ctx, 31, 0x35C17Cu);
    ctx->pc = 0x35C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C174u;
    // 0x35c178: 0x248457e8  addiu       $a0, $a0, 0x57E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C174u, 0x35C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C17Cu;
label_35c17c:
    // 0x35c17c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35C17Cu;
    {
        const bool branch_taken_0x35c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C17Cu;
        // 0x35c180: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c17c) {
            ctx->pc = 0x35C19Cu;
            goto label_35c19c;
        }
    }
    ctx->pc = 0x35C184u;
    // 0x35c184: 0x0  nop
    ctx->pc = 0x35c184u;
    // NOP
label_35c188:
    // 0x35c188: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x35c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c190: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35c194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35c198: 0x90421379  lbu         $v0, 0x1379($v0)
    ctx->pc = 0x35c198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4985)));
label_35c19c:
    // 0x35c19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1A0u;
        // 0x35c1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C1A8u;
    // 0x35c1a8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35c1ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35c1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1b0: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35c1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1b8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x35c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c1bc: 0x0  nop
    ctx->pc = 0x35c1bcu;
    // NOP
label_35c1c0:
    // 0x35c1c0: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x35c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x35c1c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35c1c8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x35c1c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35c1cc: 0x24c6006c  addiu       $a2, $a2, 0x6C
    ctx->pc = 0x35c1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x35c1d0: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x35c1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c1d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C1D4u;
    {
        const bool branch_taken_0x35c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1D4u;
        // 0x35c1d8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1d4) {
            ctx->pc = 0x35C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c1c0;
        }
    }
    ctx->pc = 0x35C1DCu;
    // 0x35c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C1E4u;
    // 0x35c1e4: 0x0  nop
    ctx->pc = 0x35c1e4u;
    // NOP
    ctx->pc = 0x35c1e8u;
}
