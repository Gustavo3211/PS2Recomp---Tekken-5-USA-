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

// Function: sub_002864B8
// Address: 0x2864b8 - 0x286588
void sub_002864B8_0x2864b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002864B8_0x2864b8");
#endif

    switch (ctx->pc) {
        case 0x28650cu: goto label_28650c;
        case 0x28655cu: goto label_28655c;
        case 0x286570u: goto label_286570;
        default: break;
    }

    ctx->pc = 0x2864b8u;

    // 0x2864b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2864b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2864bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2864bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2864c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2864c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2864c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2864c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2864ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2864d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2864d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2864D4u;
    {
        const bool branch_taken_0x2864d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2864D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864D4u;
        // 0x2864d8: 0x26070034  addiu       $a3, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864d4) {
            ctx->pc = 0x286528u;
            goto label_286528;
        }
    }
    ctx->pc = 0x2864DCu;
    // 0x2864dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2864dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2864e0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2864e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2864e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2864e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2864ec: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2864ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2864f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2864f4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x2864f8: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x2864f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x2864fc: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x286500: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286504: 0xc0d4716  jal         func_351C58
    ctx->pc = 0x286504u;
    SET_GPR_U32(ctx, 31, 0x28650Cu);
    ctx->pc = 0x286508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286504u;
    // 0x286508: 0x24c65ee0  addiu       $a2, $a2, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C58u, 0x286504u, 0x28650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28650Cu;
label_28650c:
    // 0x28650c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286514: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x286514u;
    {
        const bool branch_taken_0x286514 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286514u;
        // 0x286518: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286514) {
            ctx->pc = 0x286570u;
            goto label_286570;
        }
    }
    ctx->pc = 0x28651Cu;
    // 0x28651c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28651Cu;
    {
        const bool branch_taken_0x28651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28651c) {
            ctx->pc = 0x286554u;
            goto label_286554;
        }
    }
    ctx->pc = 0x286524u;
    // 0x286524: 0x0  nop
    ctx->pc = 0x286524u;
    // NOP
label_286528:
    // 0x286528: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28652c: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x28652cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x286530: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286534: 0x50e2000f  beql        $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286534u;
    {
        const bool branch_taken_0x286534 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x286534) {
            ctx->pc = 0x286538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286534u;
            // 0x286538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286574u;
            goto label_286574;
        }
    }
    ctx->pc = 0x28653Cu;
    // 0x28653c: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x28653Cu;
    {
        const bool branch_taken_0x28653c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x28653c) {
            ctx->pc = 0x286554u;
            goto label_286554;
        }
    }
    ctx->pc = 0x286544u;
    // 0x286544: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x286544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x286548: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x28654c: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x286568u;
            goto label_286568;
        }
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286554u;
    SET_GPR_U32(ctx, 31, 0x28655Cu);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286554u, 0x28655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28655Cu;
label_28655c:
    // 0x28655c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28655Cu;
    {
        const bool branch_taken_0x28655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28655Cu;
        // 0x286560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28655c) {
            ctx->pc = 0x286574u;
            goto label_286574;
        }
    }
    ctx->pc = 0x286564u;
    // 0x286564: 0x0  nop
    ctx->pc = 0x286564u;
    // NOP
label_286568:
    // 0x286568: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286568u;
    SET_GPR_U32(ctx, 31, 0x286570u);
    ctx->pc = 0x28656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286568u;
    // 0x28656c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286568u, 0x286570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286570u;
label_286570:
    // 0x286570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286574:
    // 0x286574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28657c: 0x3e00008  jr          $ra
    ctx->pc = 0x28657Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28657Cu;
        // 0x286580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28657Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286584u;
    // 0x286584: 0x0  nop
    ctx->pc = 0x286584u;
    // NOP
    ctx->pc = 0x286588u;
}
