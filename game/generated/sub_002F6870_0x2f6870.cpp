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

// Function: sub_002F6870
// Address: 0x2f6870 - 0x2f6960
void sub_002F6870_0x2f6870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6870_0x2f6870");
#endif

    switch (ctx->pc) {
        case 0x2f68dcu: goto label_2f68dc;
        case 0x2f6910u: goto label_2f6910;
        case 0x2f6944u: goto label_2f6944;
        default: break;
    }

    ctx->pc = 0x2f6870u;

    // 0x2f6870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f687c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f6880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6884: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x2f6884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x2f6888: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F6888u;
    {
        const bool branch_taken_0x2f6888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6888u;
        // 0x2f688c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6888) {
            ctx->pc = 0x2F6948u;
            goto label_2f6948;
        }
    }
    ctx->pc = 0x2F6890u;
    // 0x2f6890: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x2f6890u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x2f6894: 0x51b83  sra         $v1, $a1, 14
    ctx->pc = 0x2f6894u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 14));
    // 0x2f6898: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f689c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f68a0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f68a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f68a4: 0x648823  subu        $s1, $v1, $a0
    ctx->pc = 0x2f68a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f68a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f68ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F68ACu;
    {
        const bool branch_taken_0x2f68ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68ACu;
        // 0x2f68b0: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68ac) {
            ctx->pc = 0x2F68BCu;
            goto label_2f68bc;
        }
    }
    ctx->pc = 0x2F68B4u;
    // 0x2f68b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f68b8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x2f68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_2f68bc:
    // 0x2f68bc: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f68c0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2f68c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f68c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F68C4u;
    {
        const bool branch_taken_0x2f68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f68c4) {
            ctx->pc = 0x2F68C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F68C4u;
            // 0x2f68c8: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F68CCu;
            goto label_2f68cc;
        }
    }
    ctx->pc = 0x2F68CCu;
label_2f68cc:
    // 0x2f68cc: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F68CCu;
    {
        const bool branch_taken_0x2f68cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68CCu;
        // 0x2f68d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68cc) {
            ctx->pc = 0x2F6948u;
            goto label_2f6948;
        }
    }
    ctx->pc = 0x2F68D4u;
    // 0x2f68d4: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F68D4u;
    SET_GPR_U32(ctx, 31, 0x2F68DCu);
    ctx->pc = 0x2F68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68D4u;
    // 0x2f68d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F68D4u, 0x2F68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68DCu;
label_2f68dc:
    // 0x2f68dc: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x2f68dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x2f68e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f68e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F68E4u;
    {
        const bool branch_taken_0x2f68e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f68e4) {
            ctx->pc = 0x2F68E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F68E4u;
            // 0x2f68e8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6900u;
            goto label_2f6900;
        }
    }
    ctx->pc = 0x2F68ECu;
    // 0x2f68ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f68f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f68f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F68F4u;
    {
        const bool branch_taken_0x2f68f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f68f4) {
            ctx->pc = 0x2F6908u;
            goto label_2f6908;
        }
    }
    ctx->pc = 0x2F68FCu;
    // 0x2f68fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f6900:
    // 0x2f6900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6904: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f6908:
    // 0x2f6908: 0xc0bdcf4  jal         func_2F73D0
    ctx->pc = 0x2F6908u;
    SET_GPR_U32(ctx, 31, 0x2F6910u);
    ctx->pc = 0x2F73D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F73D0u, 0x2F6908u, 0x2F6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6910u;
label_2f6910:
    // 0x2f6910: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x2f6910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2f6914: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f6914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6918: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6918u;
    {
        const bool branch_taken_0x2f6918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6918) {
            ctx->pc = 0x2F691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6918u;
            // 0x2f691c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6934u;
            goto label_2f6934;
        }
    }
    ctx->pc = 0x2F6920u;
    // 0x2f6920: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6924: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f6928: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6928u;
    {
        const bool branch_taken_0x2f6928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6928) {
            ctx->pc = 0x2F693Cu;
            goto label_2f693c;
        }
    }
    ctx->pc = 0x2F6930u;
    // 0x2f6930: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f6934:
    // 0x2f6934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6938: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f693c:
    // 0x2f693c: 0xc0be05e  jal         func_2F8178
    ctx->pc = 0x2F693Cu;
    SET_GPR_U32(ctx, 31, 0x2F6944u);
    ctx->pc = 0x2F8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8178u, 0x2F693Cu, 0x2F6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6944u;
label_2f6944:
    // 0x2f6944: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f6944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6948:
    // 0x2f6948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f694c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f694cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6954: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6954u;
        // 0x2f6958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F695Cu;
    // 0x2f695c: 0x0  nop
    ctx->pc = 0x2f695cu;
    // NOP
    ctx->pc = 0x2f6960u;
}
