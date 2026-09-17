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

// Function: sub_001300B0
// Address: 0x1300b0 - 0x130150
void sub_001300B0_0x1300b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001300B0_0x1300b0");
#endif

    switch (ctx->pc) {
        case 0x1300c8u: goto label_1300c8;
        default: break;
    }

    ctx->pc = 0x1300b0u;

    // 0x1300b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1300b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1300b4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1300b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1300b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1300b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1300bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1300bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1300c0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1300C0u;
    SET_GPR_U32(ctx, 31, 0x1300C8u);
    ctx->pc = 0x1300C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300C0u;
    // 0x1300c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1300C0u, 0x1300C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C8u;
label_1300c8:
    // 0x1300c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1300c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1300d0: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1300d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1300D4u;
    {
        const bool branch_taken_0x1300d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300D4u;
        // 0x1300d8: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300d4) {
            ctx->pc = 0x130140u;
            goto label_130140;
        }
    }
    ctx->pc = 0x1300DCu;
    // 0x1300dc: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1300DCu;
    {
        const bool branch_taken_0x1300dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300DCu;
        // 0x1300e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300dc) {
            ctx->pc = 0x130144u;
            goto label_130144;
        }
    }
    ctx->pc = 0x1300E4u;
    // 0x1300e4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1300e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1300e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1300E8u;
    {
        const bool branch_taken_0x1300e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300E8u;
        // 0x1300ec: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300e8) {
            ctx->pc = 0x13010Cu;
            goto label_13010c;
        }
    }
    ctx->pc = 0x1300F0u;
    // 0x1300f0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1300f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1300f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1300f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300f8: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1300F8u;
    {
        const bool branch_taken_0x1300f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1300FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300F8u;
        // 0x1300fc: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300f8) {
            ctx->pc = 0x130144u;
            goto label_130144;
        }
    }
    ctx->pc = 0x130100u;
    // 0x130100: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130100u;
    {
        const bool branch_taken_0x130100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130100u;
        // 0x130104: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130100) {
            ctx->pc = 0x130120u;
            goto label_130120;
        }
    }
    ctx->pc = 0x130108u;
    // 0x130108: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x130108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13010c:
    // 0x13010c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x13010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x130110: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x130110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x130114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x130114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130118: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130118u;
    {
        const bool branch_taken_0x130118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130118u;
        // 0x13011c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130118) {
            ctx->pc = 0x130140u;
            goto label_130140;
        }
    }
    ctx->pc = 0x130120u;
label_130120:
    // 0x130120: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x130120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130124: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x130124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x130128: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x130128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13012c: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x13012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x130130: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x130130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130134: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x130134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130138: 0x21823  negu        $v1, $v0
    ctx->pc = 0x130138u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13013c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x13013cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_130140:
    // 0x130140: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_130144:
    // 0x130144: 0x3e00008  jr          $ra
    ctx->pc = 0x130144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130144u;
        // 0x130148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13014Cu;
    // 0x13014c: 0x0  nop
    ctx->pc = 0x13014cu;
    // NOP
    ctx->pc = 0x130150u;
}
