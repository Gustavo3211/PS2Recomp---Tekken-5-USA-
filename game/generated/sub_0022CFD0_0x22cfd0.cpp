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

// Function: sub_0022CFD0
// Address: 0x22cfd0 - 0x22d078
void sub_0022CFD0_0x22cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CFD0_0x22cfd0");
#endif

    ctx->pc = 0x22cfd0u;

    // 0x22cfd0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x22cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22cfd4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x22cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x22cfd8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22CFD8u;
    {
        const bool branch_taken_0x22cfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD8u;
        // 0x22cfdc: 0x3c060100  lui         $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfd8) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22CFE0u;
    // 0x22cfe0: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x22cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x22cfe4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22CFE4u;
    {
        const bool branch_taken_0x22cfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFE4u;
        // 0x22cfe8: 0x3c060200  lui         $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfe4) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22CFECu;
    // 0x22cfec: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x22cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x22cff0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22CFF0u;
    {
        const bool branch_taken_0x22cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cff0) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22CFF8u;
    // 0x22cff8: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x22cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x22cffc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22CFFCu;
    {
        const bool branch_taken_0x22cffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFFCu;
        // 0x22d000: 0x3c060400  lui         $a2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cffc) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D004u;
    // 0x22d004: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x22d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x22d008: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22D008u;
    {
        const bool branch_taken_0x22d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D008u;
        // 0x22d00c: 0x3c060500  lui         $a2, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d008) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D010u;
    // 0x22d010: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x22d010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x22d014: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22D014u;
    {
        const bool branch_taken_0x22d014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D014u;
        // 0x22d018: 0x3c060600  lui         $a2, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1536 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d014) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D01Cu;
    // 0x22d01c: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x22d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x22d020: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D020u;
    {
        const bool branch_taken_0x22d020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D020u;
        // 0x22d024: 0x3c060700  lui         $a2, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1792 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d020) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D028u;
    // 0x22d028: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x22d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x22d02c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D02Cu;
    {
        const bool branch_taken_0x22d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D02Cu;
        // 0x22d030: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d02c) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D034u;
    // 0x22d034: 0x30a20400  andi        $v0, $a1, 0x400
    ctx->pc = 0x22d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x22d038: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D038u;
    {
        const bool branch_taken_0x22d038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D038u;
        // 0x22d03c: 0x3c060900  lui         $a2, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2304 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d038) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D040u;
    // 0x22d040: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x22d040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x22d044: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D044u;
    {
        const bool branch_taken_0x22d044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D044u;
        // 0x22d048: 0x3c060a00  lui         $a2, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2560 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d044) {
            ctx->pc = 0x22D060u;
            goto label_22d060;
        }
    }
    ctx->pc = 0x22D04Cu;
    // 0x22d04c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x22d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x22d050: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x22d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
    // 0x22d054: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22d058: 0x3c060b00  lui         $a2, 0xB00
    ctx->pc = 0x22d058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2816 << 16));
    // 0x22d05c: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x22d05cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22d060:
    // 0x22d060: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x22d064: 0x3442f003  ori         $v0, $v0, 0xF003
    ctx->pc = 0x22d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61443);
    // 0x22d068: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22d06c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22d070: 0x3e00008  jr          $ra
    ctx->pc = 0x22D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D070u;
        // 0x22d074: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D078u;
}
