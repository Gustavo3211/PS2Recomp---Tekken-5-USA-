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

// Function: sub_00127470
// Address: 0x127470 - 0x127528
void sub_00127470_0x127470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127470_0x127470");
#endif

    ctx->pc = 0x127470u;

    // 0x127470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x127470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127478: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x127478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12747c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x12747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x127480: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x127480u;
    {
        const bool branch_taken_0x127480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127480u;
        // 0x127484: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127480) {
            ctx->pc = 0x1274C4u;
            goto label_1274c4;
        }
    }
    ctx->pc = 0x127488u;
    // 0x127488: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x127488u;
    {
        const bool branch_taken_0x127488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127488u;
        // 0x12748c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127488) {
            ctx->pc = 0x1274D8u;
            goto label_1274d8;
        }
    }
    ctx->pc = 0x127490u;
    // 0x127490: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x127490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127494: 0x2882ff82  slti        $v0, $a0, -0x7E
    ctx->pc = 0x127494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x127498: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x127498u;
    {
        const bool branch_taken_0x127498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127498) {
            ctx->pc = 0x12749Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127498u;
            // 0x12749c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1274D4u;
            goto label_1274d4;
        }
    }
    ctx->pc = 0x1274A0u;
    // 0x1274a0: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x1274a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1274a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1274A4u;
    {
        const bool branch_taken_0x1274a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274a4) {
            ctx->pc = 0x1274A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1274A4u;
            // 0x1274a8: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1274C4u;
            goto label_1274c4;
        }
    }
    ctx->pc = 0x1274ACu;
    // 0x1274ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1274acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1274b0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1274B0u;
    {
        const bool branch_taken_0x1274b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B0u;
        // 0x1274b4: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274b0) {
            ctx->pc = 0x1274D0u;
            goto label_1274d0;
        }
    }
    ctx->pc = 0x1274B8u;
    // 0x1274b8: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1274B8u;
    {
        const bool branch_taken_0x1274b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1274b8) {
            ctx->pc = 0x1274BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1274B8u;
            // 0x1274bc: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1274D4u;
            goto label_1274d4;
        }
    }
    ctx->pc = 0x1274C0u;
    // 0x1274c0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1274c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1274c4:
    // 0x1274c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1274C4u;
    {
        const bool branch_taken_0x1274c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274C4u;
        // 0x1274c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274c4) {
            ctx->pc = 0x1274D4u;
            goto label_1274d4;
        }
    }
    ctx->pc = 0x1274CCu;
    // 0x1274cc: 0x0  nop
    ctx->pc = 0x1274ccu;
    // NOP
label_1274d0:
    // 0x1274d0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1274d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_1274d4:
    // 0x1274d4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1274d8:
    // 0x1274d8: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1274d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1274dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1274dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1274e0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1274e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1274e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1274e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1274e8: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1274e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x1274ec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1274ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1274f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1274f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1274f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1274f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1274f8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1274f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1274fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1274fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x127500: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x127500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x127504: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x127504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x127508: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12750c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x12750cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x127510: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x127510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x127514: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x127514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x127518: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x127518u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12751c: 0x3e00008  jr          $ra
    ctx->pc = 0x12751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127524u;
    // 0x127524: 0x0  nop
    ctx->pc = 0x127524u;
    // NOP
    ctx->pc = 0x127528u;
}
