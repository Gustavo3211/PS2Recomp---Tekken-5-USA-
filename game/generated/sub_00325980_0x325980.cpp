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

// Function: sub_00325980
// Address: 0x325980 - 0x325aa0
void sub_00325980_0x325980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325980_0x325980");
#endif

    switch (ctx->pc) {
        case 0x3259c8u: goto label_3259c8;
        case 0x3259dcu: goto label_3259dc;
        default: break;
    }

    ctx->pc = 0x325980u;

    // 0x325980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325984: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x325984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32598c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x325990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325998: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x325998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32599c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3259a0: 0x240603f0  addiu       $a2, $zero, 0x3F0
    ctx->pc = 0x3259a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x3259a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3259a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3259a8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3259a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3259ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3259acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3259b0: 0x26930400  addiu       $s3, $s4, 0x400
    ctx->pc = 0x3259b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x3259b4: 0x8e680014  lw          $t0, 0x14($s3)
    ctx->pc = 0x3259b4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x400414u));
    // 0x3259b8: 0x2673002c  addiu       $s3, $s3, 0x2C
    ctx->pc = 0x3259b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x3259bc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3259bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259c0: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x3259C0u;
    SET_GPR_U32(ctx, 31, 0x3259C8u);
    ctx->pc = 0x3259C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259C0u;
    // 0x3259c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x3259C0u, 0x3259C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259C8u;
label_3259c8:
    // 0x3259c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3259c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3259ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259d0: 0x240604a0  addiu       $a2, $zero, 0x4A0
    ctx->pc = 0x3259d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1184));
    // 0x3259d4: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x3259D4u;
    SET_GPR_U32(ctx, 31, 0x3259DCu);
    ctx->pc = 0x3259D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259D4u;
    // 0x3259d8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x3259D4u, 0x3259DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259DCu;
label_3259dc:
    // 0x3259dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3259dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3259e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259e4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3259e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3259e8: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3259e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3259ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3259ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3259f0: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x3259f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3259f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3259f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3259f8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3259f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3259fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3259fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a00: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x325a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325a04: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x325a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x325a08: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x325a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x325a0c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x325a0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x325a10: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x325a14: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x325a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x325a18: 0x16040005  bne         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325A18u;
    {
        const bool branch_taken_0x325a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x325A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A18u;
        // 0x325a1c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a18) {
            ctx->pc = 0x325A30u;
            goto label_325a30;
        }
    }
    ctx->pc = 0x325A20u;
    // 0x325a20: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x325a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x325a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x325A24u;
    {
        const bool branch_taken_0x325a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A24u;
        // 0x325a28: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a24) {
            ctx->pc = 0x325A38u;
            goto label_325a38;
        }
    }
    ctx->pc = 0x325A2Cu;
    // 0x325a2c: 0x0  nop
    ctx->pc = 0x325a2cu;
    // NOP
label_325a30:
    // 0x325a30: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x325a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x325a34: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x325a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_325a38:
    // 0x325a38: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x325a38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x325a3c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x325a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x325a40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x325a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x325a44: 0x891024  and         $v0, $a0, $t1
    ctx->pc = 0x325a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x325a48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x325a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x325a4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x325a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325a50: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x325a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x325a54: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x325a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x325a58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x325a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x325a5c: 0x108a0002  beq         $a0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A5Cu;
    {
        const bool branch_taken_0x325a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x325A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A5Cu;
        // 0x325a60: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a5c) {
            ctx->pc = 0x325A68u;
            goto label_325a68;
        }
    }
    ctx->pc = 0x325A64u;
    // 0x325a64: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x325a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_325a68:
    // 0x325a68: 0x71631b89  pcpyld      $v1, $t3, $v1
    ctx->pc = 0x325a68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x325a6c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x325a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x325a70: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x325a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x325a74: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x325a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x325a78: 0x26820400  addiu       $v0, $s4, 0x400
    ctx->pc = 0x325a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x325a7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325a7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325a88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325a8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325a90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x325a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325a94: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x325a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x325a98: 0x3e00008  jr          $ra
    ctx->pc = 0x325A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A98u;
        // 0x325a9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325AA0u;
}
