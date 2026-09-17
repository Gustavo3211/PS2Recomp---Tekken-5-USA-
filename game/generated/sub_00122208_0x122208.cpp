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

// Function: sub_00122208
// Address: 0x122208 - 0x122298
void sub_00122208_0x122208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122208_0x122208");
#endif

    switch (ctx->pc) {
        case 0x12221cu: goto label_12221c;
        case 0x122258u: goto label_122258;
        default: break;
    }

    ctx->pc = 0x122208u;

    // 0x122208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12220c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x122210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x122214: 0xc048758  jal         func_121D60
    ctx->pc = 0x122214u;
    SET_GPR_U32(ctx, 31, 0x12221Cu);
    ctx->pc = 0x122218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122214u;
    // 0x122218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D60u, 0x122214u, 0x12221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12221Cu;
label_12221c:
    // 0x12221c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12221cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122220: 0x2061823  subu        $v1, $s0, $a2
    ctx->pc = 0x122220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x122224: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x122228: 0x2ca200c0  sltiu       $v0, $a1, 0xC0
    ctx->pc = 0x122228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)192) ? 1 : 0);
    // 0x12222c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12222Cu;
    {
        const bool branch_taken_0x12222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12222Cu;
        // 0x122230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12222c) {
            ctx->pc = 0x122288u;
            goto label_122288;
        }
    }
    ctx->pc = 0x122234u;
    // 0x122234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122238: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x122238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x12223c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x12223cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x122240: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x122240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x122244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122248: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x122248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x12224c: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x12224cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x122250: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x122250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x122254: 0x0  nop
    ctx->pc = 0x122254u;
    // NOP
label_122258:
    // 0x122258: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x122258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12225c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x12225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x122260: 0x0  nop
    ctx->pc = 0x122260u;
    // NOP
    // 0x122264: 0x0  nop
    ctx->pc = 0x122264u;
    // NOP
    // 0x122268: 0x0  nop
    ctx->pc = 0x122268u;
    // NOP
    // 0x12226c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12226Cu;
    {
        const bool branch_taken_0x12226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12226c) {
            ctx->pc = 0x122270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12226Cu;
            // 0x122270: 0x641826  xor         $v1, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122258;
        }
    }
    ctx->pc = 0x122274u;
    // 0x122274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x122278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12227c: 0xacc300d0  sw          $v1, 0xD0($a2)
    ctx->pc = 0x12227cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 3));
    // 0x122280: 0x3e00008  jr          $ra
    ctx->pc = 0x122280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122280u;
        // 0x122284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122288u;
label_122288:
    // 0x122288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12228c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122290: 0x8049e8e  j           func_127A38
    ctx->pc = 0x122290u;
    ctx->pc = 0x122294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122290u;
    // 0x122294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    sub_00127A38_0x127a38(rdram, ctx, runtime); return;
    ctx->pc = 0x122298u;
}
