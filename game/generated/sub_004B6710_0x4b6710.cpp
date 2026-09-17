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

// Function: sub_004B6710
// Address: 0x4b6710 - 0x4b6818
void sub_004B6710_0x4b6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6710_0x4b6710");
#endif

    switch (ctx->pc) {
        case 0x4b6720u: goto label_4b6720;
        case 0x4b6760u: goto label_4b6760;
        case 0x4b67f8u: goto label_4b67f8;
        case 0x4b6810u: goto label_4b6810;
        default: break;
    }

    ctx->pc = 0x4b6710u;

    // 0x4b6710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b6714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b6718: 0xc1232e2  jal         func_48CB88
    ctx->pc = 0x4B6718u;
    SET_GPR_U32(ctx, 31, 0x4B6720u);
    ctx->pc = 0x48CB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CB88u, 0x4B6718u, 0x4B6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6720u;
label_4b6720:
    // 0x4b6720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b6720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6724: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4b6724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6728: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4b6728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4b672c: 0x10c5002c  beq         $a2, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B672Cu;
    {
        const bool branch_taken_0x4b672c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B672Cu;
        // 0x4b6730: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b672c) {
            ctx->pc = 0x4B67E0u;
            goto label_4b67e0;
        }
    }
    ctx->pc = 0x4B6734u;
    // 0x4b6734: 0x240b005e  addiu       $t3, $zero, 0x5E
    ctx->pc = 0x4b6734u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x4b6738: 0x2447d72c  addiu       $a3, $v0, -0x28D4
    ctx->pc = 0x4b6738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956844));
    // 0x4b673c: 0x240a004f  addiu       $t2, $zero, 0x4F
    ctx->pc = 0x4b673cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x4b6740: 0x2409005a  addiu       $t1, $zero, 0x5A
    ctx->pc = 0x4b6740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4b6744: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x4b6744u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6748: 0x24ed0002  addiu       $t5, $a3, 0x2
    ctx->pc = 0x4b6748u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x4b674c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b674cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6750: 0x24ee0004  addiu       $t6, $a3, 0x4
    ctx->pc = 0x4b6750u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4b6754: 0x24ef0006  addiu       $t7, $a3, 0x6
    ctx->pc = 0x4b6754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x4b6758: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x4b6758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4b675c: 0x0  nop
    ctx->pc = 0x4b675cu;
    // NOP
label_4b6760:
    // 0x4b6760: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4b6760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b6764: 0x2c82005f  sltiu       $v0, $a0, 0x5F
    ctx->pc = 0x4b6764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x4b6768: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B6768u;
    {
        const bool branch_taken_0x4b6768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6768) {
            ctx->pc = 0x4B676Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6768u;
            // 0x4b676c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B67D8u;
            goto label_4b67d8;
        }
    }
    ctx->pc = 0x4B6770u;
    // 0x4b6770: 0x106b0007  beq         $v1, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B6770u;
    {
        const bool branch_taken_0x4b6770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x4B6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6770u;
        // 0x4b6774: 0x2c82004f  sltiu       $v0, $a0, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6770) {
            ctx->pc = 0x4B6790u;
            goto label_4b6790;
        }
    }
    ctx->pc = 0x4B6778u;
    // 0x4b6778: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B6778u;
    {
        const bool branch_taken_0x4b6778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6778) {
            ctx->pc = 0x4B677Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6778u;
            // 0x4b677c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B67D8u;
            goto label_4b67d8;
        }
    }
    ctx->pc = 0x4B6780u;
    // 0x4b6780: 0x506a0004  beql        $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6780u;
    {
        const bool branch_taken_0x4b6780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x4b6780) {
            ctx->pc = 0x4B6784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6780u;
            // 0x4b6784: 0x84a201b4  lh          $v0, 0x1B4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6794u;
            goto label_4b6794;
        }
    }
    ctx->pc = 0x4B6788u;
    // 0x4b6788: 0x54690013  bnel        $v1, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B6788u;
    {
        const bool branch_taken_0x4b6788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x4b6788) {
            ctx->pc = 0x4B678Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6788u;
            // 0x4b678c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B67D8u;
            goto label_4b67d8;
        }
    }
    ctx->pc = 0x4B6790u;
label_4b6790:
    // 0x4b6790: 0x84a201b4  lh          $v0, 0x1B4($a1)
    ctx->pc = 0x4b6790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 436)));
label_4b6794:
    // 0x4b6794: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B6794u;
    {
        const bool branch_taken_0x4b6794 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b6794) {
            ctx->pc = 0x4B6798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6794u;
            // 0x4b6798: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B67D8u;
            goto label_4b67d8;
        }
    }
    ctx->pc = 0x4B679Cu;
    // 0x4b679c: 0xa4ec0000  sh          $t4, 0x0($a3)
    ctx->pc = 0x4b679cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x4b67a0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4b67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4b67a4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4b67a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4b67a8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b67ac: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4b67acu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b67b0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4b67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4b67b4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4b67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4b67b8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b67bc: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x4b67bcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b67c0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4b67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4b67c4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4b67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4b67c8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b67cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B67CCu;
    {
        const bool branch_taken_0x4b67cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67CCu;
        // 0x4b67d0: 0xa5e20000  sh          $v0, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67cc) {
            ctx->pc = 0x4B67E8u;
            goto label_4b67e8;
        }
    }
    ctx->pc = 0x4B67D4u;
    // 0x4b67d4: 0x0  nop
    ctx->pc = 0x4b67d4u;
    // NOP
label_4b67d8:
    // 0x4b67d8: 0x54c5ffe1  bnel        $a2, $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4B67D8u;
    {
        const bool branch_taken_0x4b67d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4b67d8) {
            ctx->pc = 0x4B67DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B67D8u;
            // 0x4b67dc: 0x84a30008  lh          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6760;
        }
    }
    ctx->pc = 0x4B67E0u;
label_4b67e0:
    // 0x4b67e0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b67e4: 0xa440d72c  sh          $zero, -0x28D4($v0)
    ctx->pc = 0x4b67e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D72Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D72Cu, _value); } while (0);
label_4b67e8:
    // 0x4b67e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b67e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b67ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67ECu;
        // 0x4b67f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B67F4u;
    // 0x4b67f4: 0x0  nop
    ctx->pc = 0x4b67f4u;
    // NOP
label_4b67f8:
    // 0x4b67f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b67fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b6800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b6800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6804: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B6804u;
    ctx->pc = 0x4B6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6804u;
    // 0x4b6808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B680Cu;
    // 0x4b680c: 0x0  nop
    ctx->pc = 0x4b680cu;
    // NOP
label_4b6810:
    // 0x4b6810: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6818u;
}
