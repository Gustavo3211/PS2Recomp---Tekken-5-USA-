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

// Function: sub_0035C958
// Address: 0x35c958 - 0x35c9e0
void sub_0035C958_0x35c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C958_0x35c958");
#endif

    switch (ctx->pc) {
        case 0x35c9a8u: goto label_35c9a8;
        default: break;
    }

    ctx->pc = 0x35c958u;

    // 0x35c958: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35c958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35c95c: 0x53c00  sll         $a3, $a1, 16
    ctx->pc = 0x35c95cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x35c960: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c964: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x35c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35c968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c96c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c970: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c974: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c978: 0x2c840030  sltiu       $a0, $a0, 0x30
    ctx->pc = 0x35c978u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c980: 0x3c08001d  lui         $t0, 0x1D
    ctx->pc = 0x35c980u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)29 << 16));
    // 0x35c984: 0x250827b8  addiu       $t0, $t0, 0x27B8
    ctx->pc = 0x35c984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10168));
    // 0x35c988: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x35c988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35c98c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x35c98cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c990: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x35c990u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x35c994: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C994u;
    {
        const bool branch_taken_0x35c994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C994u;
        // 0x35c998: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c994) {
            ctx->pc = 0x35C9B0u;
            goto label_35c9b0;
        }
    }
    ctx->pc = 0x35C99Cu;
    // 0x35c99c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c9a0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C9A0u;
    SET_GPR_U32(ctx, 31, 0x35C9A8u);
    ctx->pc = 0x35C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C9A0u;
    // 0x35c9a4: 0x248459c8  addiu       $a0, $a0, 0x59C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C9A0u, 0x35C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9A8u;
label_35c9a8:
    // 0x35c9a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35C9A8u;
    {
        const bool branch_taken_0x35c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C9A8u;
        // 0x35c9ac: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c9a8) {
            ctx->pc = 0x35C9D4u;
            goto label_35c9d4;
        }
    }
    ctx->pc = 0x35C9B0u;
label_35c9b0:
    // 0x35c9b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c9b4: 0xa106000c  sb          $a2, 0xC($t0)
    ctx->pc = 0x35c9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x35c9b8: 0xe50c0000  swc1        $f12, 0x0($t0)
    ctx->pc = 0x35c9b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x35c9bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9c0: 0xa5070004  sh          $a3, 0x4($t0)
    ctx->pc = 0x35c9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x35c9c4: 0xe50d0008  swc1        $f13, 0x8($t0)
    ctx->pc = 0x35c9c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x35c9c8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35c9cc: 0x290821  addu        $at, $at, $t1
    ctx->pc = 0x35c9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 9)));
    // 0x35c9d0: 0xa023139e  sb          $v1, 0x139E($at)
    ctx->pc = 0x35c9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 5022), (uint8_t)GPR_U32(ctx, 3));
label_35c9d4:
    // 0x35c9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C9D8u;
        // 0x35c9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C9E0u;
}
