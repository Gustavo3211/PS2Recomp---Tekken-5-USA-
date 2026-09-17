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

// Function: sub_002CA6E8
// Address: 0x2ca6e8 - 0x2ca7b8
void sub_002CA6E8_0x2ca6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA6E8_0x2ca6e8");
#endif

    switch (ctx->pc) {
        case 0x2ca70cu: goto label_2ca70c;
        case 0x2ca77cu: goto label_2ca77c;
        default: break;
    }

    ctx->pc = 0x2ca6e8u;

    // 0x2ca6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca6f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ca6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca6f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca704: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA704u;
    SET_GPR_U32(ctx, 31, 0x2CA70Cu);
    ctx->pc = 0x2CA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA704u;
    // 0x2ca708: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA704u, 0x2CA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA70Cu;
label_2ca70c:
    // 0x2ca70c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca710: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2ca714: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca718: 0x8f84bb18  lw          $a0, -0x44E8($gp)
    ctx->pc = 0x2ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca71c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ca71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ca720: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ca720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ca724: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ca724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ca728: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ca72c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA72Cu;
        // 0x2ca730: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA79Cu;
            goto label_2ca79c;
        }
    }
    ctx->pc = 0x2CA734u;
    // 0x2ca734: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ca734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca738: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA738u;
    {
        const bool branch_taken_0x2ca738 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA738u;
        // 0x2ca73c: 0x246603a4  addiu       $a2, $v1, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca738) {
            ctx->pc = 0x2CA790u;
            goto label_2ca790;
        }
    }
    ctx->pc = 0x2CA740u;
    // 0x2ca740: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca744: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA744u;
    {
        const bool branch_taken_0x2ca744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca744) {
            ctx->pc = 0x2CA748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA744u;
            // 0x2ca748: 0x246403ac  addiu       $a0, $v1, 0x3AC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 940));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA74Cu;
    // 0x2ca74c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2ca74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca750: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA750u;
    {
        const bool branch_taken_0x2ca750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca750) {
            ctx->pc = 0x2CA754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA750u;
            // 0x2ca754: 0x3c03003e  lui         $v1, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA794u;
            goto label_2ca794;
        }
    }
    ctx->pc = 0x2CA758u;
    // 0x2ca758: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CA758u;
    {
        const bool branch_taken_0x2ca758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA758u;
        // 0x2ca75c: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca758) {
            ctx->pc = 0x2CA788u;
            goto label_2ca788;
        }
    }
    ctx->pc = 0x2CA760u;
label_2ca760:
    // 0x2ca760: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2ca760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ca764: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ca768: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ca768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca76c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ca770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca774: 0xc0b71d4  jal         func_2DC750
    ctx->pc = 0x2CA774u;
    SET_GPR_U32(ctx, 31, 0x2CA77Cu);
    ctx->pc = 0x2CA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA774u;
    // 0x2ca778: 0x8e480000  lw          $t0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC750u, 0x2CA774u, 0x2CA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA77Cu;
label_2ca77c:
    // 0x2ca77c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA77Cu;
    {
        const bool branch_taken_0x2ca77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA77Cu;
        // 0x2ca780: 0x3c03003e  lui         $v1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca77c) {
            ctx->pc = 0x2CA794u;
            goto label_2ca794;
        }
    }
    ctx->pc = 0x2CA784u;
    // 0x2ca784: 0x0  nop
    ctx->pc = 0x2ca784u;
    // NOP
label_2ca788:
    // 0x2ca788: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2ca788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2ca78c: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x2ca78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
label_2ca790:
    // 0x2ca790: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2ca794:
    // 0x2ca794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca798: 0xac624520  sw          $v0, 0x4520($v1)
    ctx->pc = 0x2ca798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17696), GPR_U32(ctx, 2));
label_2ca79c:
    // 0x2ca79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca7a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca7a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7ACu;
        // 0x2ca7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7B4u;
    // 0x2ca7b4: 0x0  nop
    ctx->pc = 0x2ca7b4u;
    // NOP
    ctx->pc = 0x2ca7b8u;
}
