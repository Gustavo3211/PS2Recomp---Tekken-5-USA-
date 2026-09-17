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

// Function: sub_001039B8
// Address: 0x1039b8 - 0x103ab8
void sub_001039B8_0x1039b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001039B8_0x1039b8");
#endif

    switch (ctx->pc) {
        case 0x1039f8u: goto label_1039f8;
        case 0x103a5cu: goto label_103a5c;
        case 0x103a64u: goto label_103a64;
        default: break;
    }

    ctx->pc = 0x1039b8u;

    // 0x1039b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1039b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1039bc: 0x2484118f  addiu       $a0, $a0, 0x118F
    ctx->pc = 0x1039bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4495));
    // 0x1039c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1039c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1039c4: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1039c8: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1039cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1039ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1039d0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1039d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1039d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039d8: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1039D8u;
    {
        const bool branch_taken_0x1039d8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039D8u;
        // 0x1039dc: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039d8) {
            ctx->pc = 0x103A54u;
            goto label_103a54;
        }
    }
    ctx->pc = 0x1039E0u;
    // 0x1039e0: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x1039e4: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x1039e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1039e8: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x1039e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x1039ec: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1039ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1039f0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1039f4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1039f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1039f8:
    // 0x1039f8: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1039f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1039fc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1039fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a00: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x103a00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x103a04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x103a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a08: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x103a0c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x103a10: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x103a10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x103a14: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x103a14u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x103a18: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x103a18u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x103a1c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x103a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x103a20: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x103a20u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x103a24: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x103a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x103a28: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x103a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x103a2c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x103a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x103a30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x103a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x103a34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x103a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x103a38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x103a3c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x103a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x103a40: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x103a40u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x103a44: 0xf  sync
    ctx->pc = 0x103a44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x103a48: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x103a4c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x103A4Cu;
    {
        const bool branch_taken_0x103a4c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x103A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A4Cu;
        // 0x103a50: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a4c) {
            ctx->pc = 0x1039F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1039f8;
        }
    }
    ctx->pc = 0x103A54u;
label_103a54:
    // 0x103a54: 0xc043d88  jal         func_10F620
    ctx->pc = 0x103A54u;
    SET_GPR_U32(ctx, 31, 0x103A5Cu);
    ctx->pc = 0x103A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A54u;
    // 0x103a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x103A54u, 0x103A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A5Cu;
label_103a5c:
    // 0x103a5c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x103A5Cu;
    SET_GPR_U32(ctx, 31, 0x103A64u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x103A5Cu, 0x103A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A64u;
label_103a64:
    // 0x103a64: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x103a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x103a68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103a6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x103a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x103a70: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x103a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x103a74: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x103a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x103a78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x103a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x103a7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x103a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x103a80: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x103a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x103a84: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x103a84u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x103a88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103a8c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x103a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x103a90: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x103a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x103a94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x103a94u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x103a98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103A98u;
    {
        const bool branch_taken_0x103a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A98u;
        // 0x103a9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a98) {
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103AA0u;
    // 0x103aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa4: 0x804627e  j           func_1189F8
    ctx->pc = 0x103AA4u;
    ctx->pc = 0x103AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AA4u;
    // 0x103aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x103AACu;
label_103aac:
    // 0x103aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x103AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB0u;
        // 0x103ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103AB8u;
}
